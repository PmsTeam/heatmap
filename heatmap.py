import numpy as np
import cv2


# import os


class Motion:
    def __init__(self):
        print("Motion Detection Object Created")
        # input file name of video
        self.in_name = "1.avi"

        # file name to save
        self.out_name = "C:\qaq"

    def prep(self):
        # type: () -> object

        # just read the first frame to get height and width
        cap = cv2.VideoCapture(self.in_name)

        ret, self.frame = cap.read()
        # rows, cols = frame.size
        height = int(cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
        width = int(cap.get(cv2.CAP_PROP_FRAME_WIDTH))

        frame_size = (height, width)
        print frame_size

        # make accumulator image of the same size
        self.accumulator = np.zeros((height, width), np.float32)  # 32 bit accumulator

    def run(self):
        cap = cv2.VideoCapture(self.in_name)
        fgbg = cv2.createBackgroundSubtractorMOG2(varThreshold=80, detectShadows=False)
        while (1):
            ret, frame = cap.read()
            if not ret:
                break
            fgmask = fgbg.apply(frame)
            self.accumulator = self.accumulator + fgmask

    def write(self):

        self.ab = cv2.convertScaleAbs(255 - np.array(self.accumulator, 'uint8'))

        # only get reasonable high values, above mean
        ret, self.acc_thresh = cv2.threshold(self.ab, 175, 255, cv2.THRESH_TOZERO)

        # make a color map
        acc_col = cv2.applyColorMap(self.acc_thresh, cv2.COLORMAP_HOT)

        cv2.imwrite(str(self.out_name + "/heatmap.jpg"), acc_col)

        # add to original frame
        backg = cv2.addWeighted(np.array(acc_col, "uint8"), 0.45, self.frame, 0.55, 0)

        cv2.imwrite(str(self.out_name + "/heatmap_background.jpg"), backg)


# ==================
# MAIN ENTRY POINT
# ==================

if __name__ == "__main__":
    motionVid = Motion()
    motionVid.prep()
    motionVid.run()
    motionVid.write()