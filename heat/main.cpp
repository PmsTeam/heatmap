#include "opencv2/objdetect.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <string>
#include <iostream>
#include <stack>
#include <vector>
#include "lodepng.h"
#include "heatmap.h"
using namespace std;
using namespace cv;


Mat detect_people(int w, int h, Mat frame);

//int main(int argc, char* argv[])
int main()
{
    //string sourcePath = argv[2];
    //string outputPath;


    VideoCapture cap;
    cap.open("D:/1.avi");
    //cap.open(sourcePath);
    if (!cap.isOpened())
    {
        cout << "Cannot open the video file" << endl;
        system("pause");
        return -1;
    }
    if (cap.get(CV_CAP_PROP_FRAME_COUNT) < 2) {
        cout << "error:video file must have at least two frame" << endl;
        return 0;
    }

    Mat frame, frame1;


    while (true)
    {
        cap.read(frame);
        if (frame.empty())
            break;
        int  frameHeight = cap.get(CV_CAP_PROP_FRAME_HEIGHT);
        int  frameWidth  = cap.get(CV_CAP_PROP_FRAME_WIDTH);

        frame1 = detect_people(frameWidth, frameHeight, frame);
        addWeighted(frame1, 0.5, frame, 0.5, 0 ,frame);
        int height;
        height = ((frame.size().height) * 400) / frame.size().width;
        resize(frame, frame, Size(400, height));
        imshow("heatmap", frame);
        char c = cvWaitKey(33);
        if( c == 27 ) break;
    }
    cap.release();
    return 0;
}

Mat detect_people(int w, int h, Mat frame)
{


    heatmap_t* hm = heatmap_new(w, h);
    heatmap_stamp_t* stamp = heatmap_stamp_gen(64);
    HOGDescriptor hog;
    hog.setSVMDetector(HOGDescriptor::getDefaultPeopleDetector());
    vector<Rect> detected, detected_filtered;
    hog.detectMultiScale(frame, detected, 0, Size(4, 4), Size(16, 16), 1.06, 2);
    size_t i, j;
    /*checking for the distinctly detected human in a frame*/
    for (i = 0; i<detected.size(); i++)
    {
        Rect r = detected[i];
        for (j = 0; j<detected.size(); j++)
            if (j != i && (r & detected[j]) == r)
                break;
        if (j == detected.size())
            detected_filtered.push_back(r);
    }

    /*for each distinctly detected human draw rectangle around it*/
    for (i = 0; i<detected_filtered.size(); i++)
    {
        Rect r = detected_filtered[i];
        r.x += cvRound(r.width*0.1);
        r.width = cvRound(r.width*0.4);
        r.y += cvRound(r.height*0.07);
        r.height = cvRound(r.height*0.4);
        //rectangle(frame, r.tl(), r.br(), Scalar(0, 0, 255), 1);
        //Mat overlay;
        //overlay = frame.clone();
        //circle(overlay, Point(r.x + 0.5*r.width, r.y + 0.5*r.height), 10, (5, 231, 252), -1);
        //double alpha = 0.5;
        //addWeighted(overlay, alpha, frame, 1 - alpha, 0, frame);
        //X.push(r.x + 0.5*r.width);
        //Y.push(r.y + 0.5*r.height);
        int x = r.x + 0.5*r.width, y = r.y + 0.5*r.height;

        heatmap_add_point_with_stamp(hm, x, y, stamp);


    }


    // This creates an image out of the heatmap.
    // `image` now contains the image data in 32-bit RGBA.
    std::vector<unsigned char> image(w*h*4);
    heatmap_render_default_to(hm, &image[0]);
    // Now that we've got a finished heatmap picture, we don't need the map anymore.
    heatmap_free(hm);

    // Finally, we use the fantastic lodepng library to save it as an image.
    if(unsigned error = lodepng::encode("heatmap.png", image, w, h)) {
        std::cerr << "encoder error " << error << ": "<< lodepng_error_text(error) << std::endl;
        //return 1;
    }
    Mat tem;
    tem = imread("heatmap.png");
    return tem;
}
