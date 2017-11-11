#include "f2_e8.h"
Point::Point(double a, double b):X(a), Y(b)
{}
Point::Point(Point&a)
{
	X = a.X;
	Y = a.Y; 
} 
double Point::Distance(Point&a)
{
	return sqrt((X - a.X) * (X - a.X) + (Y - a.Y) * (Y - a.Y));
}
Line::Line(double a1, double a2, double a3, double a4, Cow &c):Point(a1, a2), X2(a3), Y2(a4), cw(c)
{}
Line::Line(Line &s):Point(s), X2(s.X2), Y2(s.Y2), cw(s.cw)
{}
double Line::Distance()
{
	double x = X2 - X;
	double y = Y2 - Y;
	return sqrt(x * x + y * y);
}
void Line::Display()
{
	cout << "X=" << X << ", Y=" << Y << ", X2=" << X2 << ", Y2=" << Y2 << ",Color=" << cw.Color << ", Width=" << cw.Width << endl; 
}
double Line::Area()
{
	return cw.Width * Distance();
}
ostream &operator<<(ostream&stream, Line obj)
{
	stream << "使重载<< 输入线段属性如下：" << endl;
	stream << obj.Getx() << "," << obj.Gety() << ", " << obj.Getx2() << ", " << obj.Gety2() << ", " << obj.Getc() << "," << obj.Getw() << endl;
	return stream;
}

