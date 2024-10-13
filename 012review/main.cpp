#include <iostream>

using namespace std;

class A
{
public:
	string name;
private:
	int a;
};

int main()
{
	A a;
	cout << sizeof(a) << endl;
	string A::* ps = &A::name;
	a.*ps = "China";
	cout << a.*ps << endl;
	return 0;
}