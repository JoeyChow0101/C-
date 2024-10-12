#include <iostream>

using namespace std;

class Widget
{
public:
	Widget()
	{
		pa[0] = &Widget::f;
		pa[1] = &Widget::g;
		pa[2] = &Widget::h;
		pa[3] = &Widget::i;
	}

	void select(int idx)
	{
		(this->*pa[idx])();
	}
private:
	void f() { cout << "void f()" << endl; }
	void g() { cout << "void g()" << endl; }
	void h() { cout << "void h()" << endl; }
	void i() { cout << "void i()" << endl; }

	void (Widget::*pa[4])();
};

int main()
{
	Widget w;
	w.select(2);
	return 0;
}