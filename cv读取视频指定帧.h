#pragma once
#ifndef cv视频指定帧_H 
#define cv视频指定帧_H

#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\头文件 opcv.h>

using namespace std;

class cv视频指定帧
{
public:
    //lib
    截图* 截图;

public:
    //int 字幕范围;
    string 当前视频路径 = "";
    string 当前视频截图路径 = "视频.png";
    string 当前字幕图片路径 = "字幕.png";

    //视频 属性
    int g_n延迟_ms = 33;          //延时时间
    int 当前进度条百分比;        //当前百分比
    int g_n当前帧;         //当前帧
    int 视频进度位置;             //设置当前帧
    char g_n_TrackbarName[50];    //用于存储显示内容 
    int g_n总帧数;     //总帧数
    bool 进度条更新 = false; //根据进度切换标志位
    float   每秒帧数;
    Mat 刚刚保存的图片;
    string 暂时转换为str1;
    string 视频当前路径;    QString 视频当前路径qstring;
    string 写入视频截图路径;    QString 写入图片路径qstring;
    string 处理图片路径;    QString 处理图片路径qstring;
    Mat 每帧图, 当前Frame;

    //视频 操作
    long 全部Frame数量;
    int 跳帧间隔 = 1; //(帧)
    int frame从开始 = 1;
    int frame从结束 = 14000000000000000000;
    long 当前Frame序号;
    double 帧率;

    //检测 范围
    int 是否有字幕,
        字幕x, 字幕x2, 字幕x3, 字幕x4,
        字幕y, 字幕y2, 字幕y3, 字幕y4;

    //匹配 颜色 数值
    vector<int > 颜色(3);
    vector<vector<int > > 颜色= { 1,1,1};
public:
    cv视频指定帧()
    {
    颜色(2, vector<int>(14, 1));


    }

    int 测试一个视频能否打开(string 路径)
    {
        VideoCapture 测试(路径);
        if (!测试.isOpened())
        {
            return 2; //不能
        }
        return 1;
    }
    //▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ 功能实现
    auto 读取一个视频的属性(string 路径)
    {
        VideoCapture 测试(路径);
        //获取总 帧数
        全部Frame数量 = 测试.get(CAP_PROP_FRAME_COUNT);
        //设置开始帧()
        frame从开始 = 1;
        测试.set(CAP_PROP_POS_FRAMES, frame从开始);
        //设置结束帧
        frame从结束 = 全部Frame数量;
        //int frame从结束 = 14000000000000000000;
    //获取帧率 FPS
        帧率 = 测试.get(CAP_PROP_FPS);
        //double delay = 1000 / 帧率;
        //return (全部Frame数量, 帧率);
    }

    auto 读取一帧图片(string 视频路径, int 帧) //
    {
        Mat frame图; //一个图片
        VideoCapture 测试(视频路径);
        测试.set(CAP_PROP_POS_FRAMES, 帧);
        测试 >> frame图;
        return frame图;
    }
    void 读取全部帧并保存(string 视频路径, int 跳帧间隔)
    {
        VideoCapture 测试(视频路径);
        //获取总 帧数
        long 全部Frame数量 = 测试.get(CAP_PROP_FRAME_COUNT);
        //设置开始帧()
        long frame从开始 = 1;
        //读取帧
        测试.set(CAP_PROP_POS_FRAMES, frame从开始);
        //设置结束帧
        int frame从结束 = 全部Frame数量;
        //int frame从结束 = 14000000000000000000;
    //获取帧率 FPS
        double 帧率 = 测试.get(CAP_PROP_FPS);
        double delay = 1000 / 帧率;

        //定义一个用来控制读取视频循环结束的变量
        bool stop = false;

        //! 承载 每一帧的图像
        Mat 每帧图, 当前Frame;

        //进度位置
        当前Frame序号 = frame从开始;

        //
        while (当前Frame序号 <= frame从结束) //rugo 进度 没完
        {
            //读取下一帧
            测试.set(CAP_PROP_POS_FRAMES, 当前Frame序号);
            测试 >> 当前Frame;
            //此处为写入操作
            stringstream str;
            str << 写入视频截图路径 << 当前Frame序号 << ".png";        /*图片存储位置*/
            imwrite(str.str(), 当前Frame); //写入(路径,Mat)
            当前Frame序号 += 跳帧间隔;
        }
    };

    //匹配一点的颜色 一个像素
    auto 匹配颜色(Mat 图片, int y,int x, int r, int g, int b,
        int r2, int g2, int b2 ) //ld个颜色 比较  之间
    {
        //bgr
        if (static_cast<int>(图片.at<Vec3b>(Point(x, y))[0]) > b && 
            static_cast<int>(图片.at<Vec3b>(Point(x, y))[0]) < b2)
        {
            if (static_cast<int>(图片.at<Vec3b>(Point(x, y))[1]) > g && 
                static_cast<int>(图片.at<Vec3b>(Point(x, y))[1]) < g2)
            {
                if (static_cast<int>(图片.at<Vec3b>(Point(x, y))[2]) > r && 
                    static_cast<int>(图片.at<Vec3b>(Point(x, y))[2]) < r2)
                {
                    return 1;
                }
            }
        }
        return 0;
    }

    void 提取一种颜色的坐标() //合理= 1
    {



    }
    void 提取一种颜色并保存为图片(Mat 图, string ) //存为新图片
    {
        Mat 结果;
        //遍历
        for (size_t y = 0; y < 图.cols; y++) //y 行
        {
            for (size_t x = 0; x < 图.rows; x++) //x 列
            {
                if (匹配颜色(x, y, ) == 1)
                {
                    
                }
            }
        }
    }
    void 在范围内_提取一种颜色并保存为图片(Mat 图, string)
    {
        //在范围内
        
        Mat 结果;
        //遍历
        for (size_t y = 0; y < 图.cols; y++) //y 行
        {
            for (size_t x = 0; x < 图.rows; x++) //x 列
            {
                if (匹配颜色(x, y, ) == 1)
                {

                }
            }
        }
    }

    //=============================================================================================================================
    //▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ 转换
    QImage Mat转QImage(Mat& mat)
    {
        cvtColor(mat, mat, COLOR_BGR2RGB);
        QImage qim((const unsigned char*)mat.data, mat.cols, mat.rows, mat.step,
            QImage::Format_RGB888);
        return qim;
    }
    Mat QImage转Mat(QImage& qim)
    {
        Mat mat = Mat(qim.height(), qim.width(),
            CV_8UC3, (void*)qim.constBits(), qim.bytesPerLine());
        return mat;
    }
    //================================================================================================================





     

};

#endif