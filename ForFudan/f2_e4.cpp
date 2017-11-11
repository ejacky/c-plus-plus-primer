#include <iostream>
#include <cmath>
using namespace std;

class Point
{
	private:
		float x, y;
	public:
		Point() 
		{}
		Point(float a, float b):x(a), y(b)
		{}
		Point(Point &a);
		float Distance(Point b);
		void Test()
		{
			cout << "just for test" << endl;
		}
};

Point::Point(Point &a)
{
	x = a.x;
	y = a.y;
}

float Point::Distance(Point b)
{
	return sqrt((x - b.x) * (x - b.x) + (y - b.y) * (y - b.y));
}

class Line:public Point
{
	private:
		Point a, b;
	public:
		Line(float x1, float y1, float x2, float y2):a(x1, y1), b(x2, y2)
		{}
		float Display();
};

float Line::Display()
{
	return a.Distance(b);
}

int main()
{
	Point a;
	Point b(7.8, 9.8), c(34.5, 67.8);
	a = c;
	cout << "两点之间距离是：" << a.Distance(b) << endl;
	Line s(7.8, 9.8, 34.5, 67.8);
	cout << s.Display() << endl;
	s.Test();
	return 0;
}
