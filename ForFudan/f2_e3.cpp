#include "f2_e3.h"
Point::Point(double a, double b):X(a), Y(b) 
{}

Point::Point(Point&a)
{
	X = a.X;
	Y = a.Y;
}

double Point::Distance(Point &a)
{
	return sqrt((X - a.X) * (X - a.X) + (Y - a.Y) * (Y - a.Y)); // 浅拷贝， 可以直接调用自己的私有成员 
}

Line::Line(Point &a1, Point &a2, Cow &a3):a(a1), b(a2), cw(a3) // 浅 copy  
{
}

Line::Line(Line&s):a(s.a), b(s.b), cw(s.cw)
{
}
 
void Line::Display()
{
	a.Display();
	b.Display();
	cout << "color = " << cw.Color << "," <<  "width=" << cw.Width << endl;
}

double Line::Distance()
{
	double x = a.Getx() - b.Getx();
	double y = a.Gety() - b.Gety();
	return sqrt( x * x + y * y);
}

double Line::Area()
{
	return cw.Width * Distance(); 
}

