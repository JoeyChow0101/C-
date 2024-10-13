#include <iostream>

using namespace std;

// ������ȫ��/��ĳ�Ա��������������Ԫ����Ϊ��Ԫ����

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