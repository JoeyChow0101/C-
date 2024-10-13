#include <iostream>

using namespace std;

class Complex
{
public:
	Complex(int r = 0, int i = 0)
		:real(r), image(i) {}
	friend Complex operator +(Complex& a, Complex& b);

	void dis()
	{
		cout << "(" << real << "," << image << ")" << endl;
	}
private:
	int real;
	int image;
};

Complex operator +(Complex& a, Complex& b)
{
	Complex t;
	t.real = a.real + b.real;
	t.image = a.image + b.image;
	return t;
}


int main()
{
	Complex c1(1,2);
	Complex c2(3,4);

	Complex c3 = c1 + c2;
	c1.dis();
	c2.dis();
	c3.dis();
	return 0;
}