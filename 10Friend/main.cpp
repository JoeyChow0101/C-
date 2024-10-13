#include <iostream>
#include <cmath>

using namespace std;

// 把一个类作为另一个类的友元，成为友元类
// 声明为谁的友元，就可以通过谁的对象，访问谁的数据成员

class Point
{
public:
	Point(double xx, double yy)
	{
		x = xx;
		y = yy;
	}
	friend class PointManagement;
private:
	int x;
	int y;
};

class PointManagement
{
public:
	double getDistance(Point& a, Point& b)
	{
		double dx = a.x - b.x;
		double dy = a.y - b.y;
		return sqrt(dx * dx + dy * dy);
	}
};

int main()
{
	Point a(0, 0);
	Point b(5, 5);
	PointManagement pm;
	cout << pm.getDistance(a,b) << endl;
	return 0;
}