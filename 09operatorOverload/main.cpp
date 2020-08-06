// 09operatorOverload.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

//C++ 认为一切操作符都是函数，函数时可以重载的(并不是所有的运算符都可以重载)。 ---  操作符时可以重载的。

struct Complex
{
    float real;
    float image;
};

Complex operator+(Complex a, Complex b)
{
    Complex c;
    
    c.real = a.real + b.real;
    c.image = a.image + b.image;
    
    return c;
}
int main()
{
    std::cout << "Hello World!\n";
    int a = 0, b = 0;
    int c = a + b;
    
    Complex aa = { 1, 2 }, bb = { 2,3 };
    Complex cc = aa + bb;
    //Complex cc = operator+(aa, bb);
    cout << "cc = " << "(" << cc.real << "," << cc.image << ")" << endl;
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
