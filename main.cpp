#include "opencv2/objdetect.hpp"
#include <opencv2/core/core.hpp>
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <string>
#include <iostream>

using namespace std;
using namespace cv;

Mat detect_people(Mat frame);
//Mat drawRound(Mat frame);
//int w, h;
int main()
{

    VideoCapture cap;
    cap.open("/home/imagainstzy/CLionProjects/opencv/1.avi");
    if (!cap.isOpened())
    {
        cout << "Cannot open the video file" << endl;
        system("pause");
        return -1;
    }
    if(cap.get(CV_CAP_PROP_FRAME_COUNT) < 2){
        cout << "error:video file must have at least two frame" << endl;
        return 0;
    }


    Mat frame,frame1,frame2;


    while (true)
    {
        cap.read(frame);
        if (frame.empty())
            break;
        frame1 = detect_people(frame);
        int height;
        height = ((frame.size().height) * 800) / frame.size().width;
        resize(frame, frame, Size(800, height));
        frame1 = detect_people(frame);
        imshow("heatmap", frame1);
        waitKey(1);
    }
    return 0;
}

Mat detect_people(Mat frame)
{
    HOGDescriptor hog;
    hog.setSVMDetector(HOGDescriptor::getDefaultPeopleDetector());
    vector<Rect> detected, detected_filtered;
    hog.detectMultiScale(frame, detected, 0, Size(8, 8), Size(16, 16), 1.06, 2);
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
        r.width = cvRound(r.width*0.8);
        r.y += cvRound(r.height*0.07);
        r.height = cvRound(r.height*0.8);
        //rectangle(frame, Point(0, 0), Point(w, h), (255, 0, 0), -1);
        rectangle(frame, r.tl(), r.br(), Scalar(0, 0, 255), 1);
        Mat overlay;
        overlay = frame.clone();
        circle(overlay, Point(r.x+0.5*r.width, r.y+0.5*r.height), 10, (5, 231, 252), -1);
        double alpha = 0.5;
        addWeighted(overlay, alpha, frame, 1 - alpha, 0, frame);
    }
    return frame;
}