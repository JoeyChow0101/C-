#include <iostream>

using namespace std;

// 函数（全局/类的成员函数）可以做友元，成为友元函数

class A;

class B
{
public:
	void diss(A& t);
};

class A
{
public:


	friend void dis(A& t);
	friend void B::diss(A& t);

private:
	int x;
	int y;
	int z;
};

void dis(A& t)
{
	cout << t.x << t.y << t.z << endl;
}

void B::diss(A& t)
{
	cout << t.x << t.y << t.z << endl;
}

int main()
{
	A a;
	B b;
	dis(a);
	b.diss(a);
	return 0;
}