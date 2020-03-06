 第二周
imread0分支是练习2；threshold分支是练习3（那么主干为练习1）代码都在calcPixelAverage.cpp里

练习1
cv::Mat srcMat = imread("D:\\1.jpg");
int height = srcMat.rows; //行数
int width = srcMat.cols; //每行元素的总元素数量
for (int j = 0; j<height; j++) {
for (int i = 0; i<width; i++)
{
//-----------------开始处理每个像素-----------------
uchar average = (srcMat.at<Vec3b>(j, i)[0] + srcMat.at<Vec3b>(j, i)[1] + 
srcMat.at<Vec3b>(j, i)[2])/3;
srcMat.at<Vec3b>(j,i)[0] = average;
srcMat.at<Vec3b>(j,i)[1] = average;
srcMat.at<Vec3b>(j,i)[2] = average;
//-------------结束像素处理------------------------
} //单行处理结束
}
imshow("src",srcMat)


练习2
2.使用 imread(“文件名”，0)，读取一张彩色图片。参数0的意思是，将
读取的图片读取后直接转换为灰度图。
imread(“文件名",0);
然后使用imshow函数显示图像，观察图像，和练习1的结果比较。

练习3
3.在练习1的基础上，在处理每个像素的时候加个一个条件。声明一个
uchar变量
uchar threshold =100;
如果average>threshold 则average=255，否则为0。
然后再把average值赋值给像素的3个通道，并通过imshow函数观察结果，
然后修改threshold值，观察输出结果。

练习4
4.读取一张图片，存入mat型变量srcMat，然后声明两个mat型数据，命
名为deepMat和shallowMat。分别用深复制和浅复制把srcMat的内容赋
值给两个mat。然后用例3中的方法修改srcMat的值。观察deepMat和
shallowMat的变化
