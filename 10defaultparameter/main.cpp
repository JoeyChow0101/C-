// 10defaultparameter.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <time.h>

using namespace std;

void weatherForcast(string weather = "pm2.5")
{
    char tmp[64];
    struct tm t;   //tm结构指针
    time_t now;  //声明time_t类型变量
    time(&now);      //获取系统日期和时间
    localtime_s(&t, &now);   //获取当地日期和时间
    strftime(tmp, _countof(tmp), "%Y/%m/%d %H:%M:%S", &t);
    cout << tmp << " today is weather " << weather << endl;
}

//rainy sunny windy snowy floggy pm2.5

//参数从右向左默认，中间不能跳跃
//实参的个数+默认参数的个数>=形参的个数
int volume(int l, int w, int h = 5)
{
    return l * w * h;
}

int main()
{
    std::cout << "Hello World!\n";
    weatherForcast();
    weatherForcast();
    weatherForcast();
    weatherForcast();
    weatherForcast();
    weatherForcast("rainy");
    weatherForcast("sunny");

    cout << volume(1, 2) << endl;
    cout << volume(1, 2, 10) << endl;

    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
