#include <iostream>

using namespace std;


//��������ͬ�����������б�ͬ�����ͣ�������˳��
//ƥ��ԭ��
//1. �ϸ�ƥ�䡣 2. ��ʽת�� double int float   int long float
//����ֵ���ܹ�����������

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

	double ret = fabs(-5.5);    ///ambiguous  ������
	cout << ret << endl;

	//int ret1 = abs(-5);
	//cout << ret1 << endl;

	return 0;
}
