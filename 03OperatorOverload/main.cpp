#include <iosteream>

using namespace std;

class Complex
{
public:
	Complex(float x = 0, float y = 0)
		: _x(x), _y(y) {}

	void dis()
	{
		cout << "(" << _x << "," << _y << ")" << endl;
	}

	Complex& operator+=(const Complex& c)
	{
		this->_x += c._x;
		this->_y += c._y;
		return *this;
	}
private:
	float _x;
	float _y;
};