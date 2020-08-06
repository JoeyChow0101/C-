#include <iostream>

using namespace std;


//函数名相同，函数参数列表不同，类型，个数，顺序
//匹配原则
//1. 严格匹配。 2. 隐式转化 double int float   int long float
//返回值不能构成重载条件

//int func(int a)
//{
//	printf("int func(int a)\n");
//
//}
//
//int func(char a)
//{
//	printf("int func(char a)\n");
//}

//int abs(int data)
//{
//	return data > 0 ? data : -data;
//}

double fabs(double data)
{
	return data > 0 ? data : -data;
}

int main()
{
	//int a;
	//func(a);

	//char b;
	//func(b);

	double ret = fabs(-5.5);    ///ambiguous  二义性
	cout << ret << endl;

	//int ret1 = abs(-5);
	//cout << ret1 << endl;

	return 0;
}
