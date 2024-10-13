#include <iostream>
#include <cmath>

using namespace std;

// ��һ������Ϊ��һ�������Ԫ����Ϊ��Ԫ��
// ����Ϊ˭����Ԫ���Ϳ���ͨ��˭�Ķ��󣬷���˭�����ݳ�Ա

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