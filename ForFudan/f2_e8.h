#if !defined(f2_e8_h)
#define f2_e8_h
#include <iostream>
#include <math.h>
using namespace std;
class Point
{
	protected:
		double X, Y;
	public:
		Point(double=0, double=0);
		Point(Point &);
		virtual void Display()
		{
			cout << "X=" << X << ", Y=" << Y << endl; 
		}
		double Distance(Point &);
		virtual double Area()
		{
			return 0;
		}
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

class Line: public Point
{
	double X2, Y2;
	Cow cw;
	
	public:
		Line(double, double, double ,double, Cow &);
		Line(Line &);
		void Display();
		double Distance();
		double Area();
		double Getx2()
		{
			return X2;	
		}	
		double Gety2()
		{
			return Y2;	
		} 
		double Getc()
		{
			return cw.Color;
		}
		double Getw()
		{
			return cw.Width;
		}
		friend void Disp(Line&t)
		{
			cout << t;
		}
		friend ostream&operator<<(ostream&, Line);
};
#endif
