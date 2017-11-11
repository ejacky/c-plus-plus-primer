#if ! defined(f2_e3_h)
#define f2_e3_h
#include <iostream>
#include <cmath>
using namespace std;

class Point
{
	double X, Y;
	public:
		Point(double=0, double=0);
		Point(Point&);
		void Display()
		{
			cout << X << "," << Y << endl;
		}
		double Distance(Point &);
		double Getx()
		{
			return X;
		}
		double Gety()
		{
			return Y;
		}
};

struct Cow
{
	int Color;
	int Width;
};

class Line
{
	Point a, b;
	Cow cw;
	public:
		Line(Point&, Point &, Cow &);
		void Display();
		Line(Line&);
		double Distance();
		double Area();
};
#endif
