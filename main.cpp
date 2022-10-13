#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <fstream>
#include <string>
#include <tesseract/baseapi.h>

using namespace std;
using namespace cv;

// Load a cropped text line image

int rgb = 1; // This should be changed according to the model input requirement.


int main(int argc, char** argv)
{
    std::string outText;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s [imagepath]\n", argv[0]);
        return -1;
    }

    const char* imagepath = argv[1];

    cv::Mat frame = cv::imread(imagepath, rgb);
    if (frame.empty())
    {
        fprintf(stderr, "cv::imread %s failed\n", imagepath);
        return -1;
    }

    tesseract::TessBaseAPI *api = new tesseract::TessBaseAPI();

    api->Init(NULL, "eng", tesseract::OEM_LSTM_ONLY);
    api->SetPageSegMode(tesseract::PSM_AUTO);
//    api->SetVariable("tessedit_char_whitelist", "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");

    api->SetImage(frame.data, frame.cols, frame.rows, 3, frame.step);

    outText = std::string(api->GetUTF8Text());

    std::cout << outText;
    api->End();

    imshow("Text Detection", frame);
    waitKey();

    return 0;
}
