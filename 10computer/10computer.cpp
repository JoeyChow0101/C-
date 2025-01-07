// 10computer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

class Cpu
{
public:
    virtual void run() = 0;
};

class Memory
{
public:
    virtual void run() = 0;
};

class Disk
{
public:
    virtual void run() = 0;
};

class Snapdragon: public Cpu
{
public:
    virtual void run()
    {
        cout << "Snapdragon CPU running" << endl;
    }
};

class ChangJiang: public Memory
{
public:
    virtual void run()
    {
        cout << "ChangJiang Memory running" << endl;
    }
};

class WestDigital:public Disk
{
public:
    virtual void run()
    {
        cout << "WestDigital Disk running" << endl;
    }
};

class Computer
{
public:
    Computer(Cpu* p, Memory* m, Disk* d)
        :_pc(p), _m(m), _d(d) {}
    
    ~Computer()
    {
        delete _pc;
        delete _m;
        delete _d;
    }
    void work()
    {
        _pc->run();
        _m->run();
        _d->run();
    }

private:
    Cpu* _pc;
    Memory* _m;
    Disk* _d;
};

int main()
{
    std::cout << "Hello World!\n";

    Computer c(new Snapdragon, new ChangJiang, new WestDigital);
    c.work();

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
