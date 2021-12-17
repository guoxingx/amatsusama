#include "measure.h"

using namespace std;

bool process_image(String path)
{
    if (path == "")
        return false;

    cout << "processing " << path << endl;

    Mat dest, temp;
    temp = imread(path, IMREAD_UNCHANGED);
    dest = temp.clone();

    // 高斯滤波
    GaussianBlur(temp, temp, Size(5,5), 3, 3);
    // 二值化
    threshold(temp, temp, 127, 255, THRESH_BINARY);

    vector <vector<Point>> contours;
    vector <Vec4i> hierarcy;

    // 获取轮廓
    findContours(temp, contours, hierarcy, RETR_TREE, CHAIN_APPROX_NONE);
    vector <RotatedRect> box(contours.size());

    int max_index = 0;
    float max_area = 0;

    // 拟合椭圆轮廓
    for (int i = 0; i < contours.size(); i++)
    {
        if (contours[i].size() >= 10)
        {
            box[i] = fitEllipse(Mat(contours[i]));
            Size2f size = box[i].size;
            if (size.height > 15 && size.width > 15 && size.width * size.height > max_area)
            {
                max_area = size.width * size.height;
                max_index = i;
            }
        }
    }
    if (max_area != 0)
    {
        Point2d center = box[max_index].center;

        // 绘制中心标记
        line(dest, Point2f(center.x, center.y-16), Point2f(center.x, center.y+16), COLORMAP_PINK, 4);
        line(dest, Point2f(center.x-16, center.y), Point2f(center.x+16, center.y), COLORMAP_PINK, 4);

        // 绘制椭圆轮廓
        ellipse(dest, box[max_index], Scalar(0, 255, 0), 4);
    }

    imshow("test_image", dest);
    waitKey(20);

    return 0;
}
