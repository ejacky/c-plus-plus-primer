#include <iostream>
using namespace std;
const double PI = 3.14159;

class Point
{
	private:
		double x, y;
	public:
		Point(double i, double j)
		{
			x = i;
			y = j;
		}
		virtual double area()
		{
			return 0;
		}
};  

class Circle: public Point 
{
	private:
		double radius;
	public:
		Circle(double a, double b, double r): Point(a, b)
		{
			radius= r;	
		}	
		double area()
		{
			return PI * radius * radius;
		}
};
void display(Point *p)
{
	cout << p->area() << endl;
}
void display(Point &p)
{
	cout << p.area() << endl;
}

class A
{
	public:
		A() 
		{
			cout << "this is virtual constructor A" << endl;
		}
		virtual void func()
		{
			cout << "Constructing A" << endl;
		}
		~A() {}
		virtual void fund()
		{
			cout << "Destructor A" << endl;
		}
};

class B: public A
{
	public:
		B() {func();}
		void fun()
		{
			cout << "Come here and go...";
			func();
		}
		~B() {fund();}
};

class C: public B
{
	public:
		C() {}
		void func() 
		{
			cout << "Class C" << endl;
		}
		~C() {fund();}
		void fund()
		{
			cout << "Destructor C" << endl;
		}
};

class base
{
	public:
		virtual void print()
		{
			cout << "In Base" << endl;
		}
};

class derived: public base
{
	public:
		void print()
		{
			cout << "In Derived" << endl;
		}
};

void display(base *pb, void(base::*pf)())
{
	(pb->*pf)();	
}

int main()
{
	/**
	* 8.2
	*/
//	Point a(1.5, 6.7);
//	Circle c(1.5, 6.7, 2.5);
//	Point *p = &c;
//	Point &rc = c;
//	display(a);
//	display(p);
//	display(rc);

	/**
	* 8.3
	*/
//	C c;
//	c.fun();

	/**
	* 8.6
	*/
	derived d;
	base *pb = &d;
	void (base::*pf)();
	pf = base::print;
	display(pb, pf);
	cout << "==========" << endl;
	base b;
	display(&b, base::print);
	display(&d, base::print);
}
