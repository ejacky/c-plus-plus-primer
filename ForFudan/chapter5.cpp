//class Test
//{
//	static int x;
//	int n;
//	public:
//		Test() {}
//		Test(int a, int b)
//		{
//			x =a;
//			n =b;	
//		}	
//		static int func() {return x;}
//		static void sfunc(Test &r, int a) {r.n = a;}
//		int Getn() {return n;}
//};
//int Test::x = 25;
#include <iostream>
#include <cmath>
using namespace std;

class object 
{
	private:
		int val;
	public:
		object(): val(0)
		{
			cout << "Default constructor for object" << endl;
		}
		object(int i):val(i)
		{
			cout << "Constructor for object" << val << endl;
		}
		~object()
		{
			cout << "Destructor for object" << val << endl;
		}
};

class container
{
	private:
		object one;
		object two;
		int data;
	public:
		container():data(0)
		{
			cout << "Default construct for container" << endl;
		}
		container(int i, int j, int k);
		~container()
		{
			cout << "Destructor for containter" << data << endl;
		}
};

container::container(int i, int j, int k): two(i), one(j)
{
	data = k;
	cout << "Constructor for container" << data << endl;
}

class test1
{
	private:
		int n;
	public:
		test1(int i)
		{
			n = i;
			cout << "construct:" << i << endl;	
		}	
		~test1()
		{
			cout << "destrctor:" << n << endl;
		}
		int getn() {return n;}
		void inc() {++n;}
}; 

class Point
{
	private:
		double X, Y;
	public:
		Point(double xi, double yi) {X = xi; Y = yi;}
		double GetX() {return X;}
		double GetY() {return Y;}
		friend double distances(Point &, Point &);
};

double distances(Point &a, Point &b)   // just like normal function
{
	double dx = a.X - b.X;
	double dy = a.Y - b.Y;
	return sqrt(dx * dx + dy * dy);
}

class Two;
class One
{
	private:
		int x;
	public:
		One(int a) {x = a;}
		int GetX() {return x;}
		void func(Two &);
};

class Two
{
	private:
		int y;
	public:
		Two(int b) { y = b;}
		int Gety() {return y;}
		friend void One::func(Two &);
};

void One::func(Two & r)
{
	r.y = x;
}

class Two1
{
	int y;
	public:
		friend class One1;
};

class One1
{
	int x;
	public:
		One1(int a, Two1 &r, int b)
		{
			x = a;
			r.y = b;
		}
		void Display(Two1 &);
};

void One1::Display(Two1 &r)
{
	cout << x << " " << r.y << endl;
}

class Base
{
	private:
		int x;
		const int a;
		static const int b;
		static int c;
		const int & r;
	public:
		Base(int , int);
		void Show()
		{
			cout << x << "," << a << "," << b << "," << r << endl;
		}
//		int SetA(int n)
//		{
//			a = n;
//		}
		void ShowC()
		{
			cout << c << endl;
		}
		int SetC(int m)
		{
			c = m;
		}
		void Display(const double & r)
		{
			cout << r << endl;
		}
};

const int Base::b = 125;
//int Base::c = 120;
Base::Base(int i, int j): x(i), a(j), r(x) {} 

class Base1
{
	private:
		double x, y;
		const double p;
	public:
		Base1(double m, double n, double d):p(d)
		{
			x = m;
			y = n;
		}
		void Show();
		void ShowC() const;	
};

void Base1::Show()
{
	cout << x << "," << y << " p = " << p << endl; 
}

void Base1::ShowC() const
{
	cout << x << "," << y << " const p = " << p << endl;
}

class ConstFun
{
	public:
		int f5() const {return 5;}
		int Obj() {return 45;}
};

class Test
{
	int num;
	double f1;
	public:
		Test(int n) {num = n;}
		Test(int n, double f) {num = n;f1 = f;}
		int GetNum(){return num;}
		double GetF(){return f1;}
};

class A
{
	private:
		int val;
	public:
		A(int i) 
		{
			val = i;
		}
		int value(int a)
		{
			return val + a;
		}
};

int main()
{
	//container obj, anObj(5, 6, 10);
	
	/**
	* static member
	*/
//	cout << Test::func();
//	Test b, c;
//	b.sfunc(b, 58);
//	cout << " " << b.Getn();
//	cout << " " << b.func();
//	cout << " " << c.func();
//	Test a(24, 56);
//	cout << " " << a.func() << " " << b.func() << " " << b.func() << endl;

	/**
	* static object
	*/
//	cout << "loop start" << endl;
//	for (int i = 0; i < 3; i++) {
//		static test1 a(3);v
//		test1 b(3);
//		a.inc();
//		b.inc();
//		cout << "a.n=" << a.getn() << endl;
//		cout << "b.n=" << b.getn() << endl;
//	}
//	
//	cout << "loop end." << endl;
//	cout << "Exit main()" << endl;

	/**
	*  friend function of class self 
	*/
//	Point p1(3.5, 5.5), p2(4.5, 6.5);
//	cout << "The distance is " << distances(p1, p2) << endl;

	/**
	*	another class as friend function
	*/
//	One Obj1(5);
//	Two Obj2(8);
//	cout << Obj1.GetX() << " " << Obj2.Gety() << endl;
//	Obj1.func(Obj2);
//	cout << Obj1.GetX() << " " << Obj2.Gety() << endl;

	/**
	* another class as friend class
	*/	
//	Two1 Obj2;
//	One1 Obj1(23, Obj2, 55);
//	Obj1.Display(Obj2);

//	Base a1(104, 118), a2(119, 140);
//	a1.Show();
//	a2.Show();
//	a2.Display(3.14159);
//	//const int Base::b = 120;
//	a1.ShowC(); 
//	a1.SetC(115);
//	a1.ShowC();
//	a2.ShowC();
//	a1.SetA(5);

	/**
	* const object call const function
	*/
	
//	Base1 a(8.9, 2.5, 3.1416);
//	const Base1 b(2.5, 8.9, 3.14);
//	b.ShowC();
//	a.ShowC();

	/**
	* return const object
	*/
//	ConstFun s;
//	const int i = s.f5();
//	const int j = s.Obj();
//	int x = s.Obj();
//	int y = s.f5();
//	cout << i << " " << j << " " << x << " ";
//	const ConstFun d;
//	int k = d.f5();
//	cout << " k = " << k << endl;

	/**
	*  array and class
	*/ 
//	Test one[2] = {2, 4}, *p;
//	Test two[2] ={Test(1, 3.2), Test(5, 9.5)};
//	for (int i = 0; i < 2; i++)
//		cout << "one[" << i << "] =" << one[i].GetNum() << endl; 
//	p = two;
//	for (int i = 0; i < 2; i++, p++)
//		cout << "two[" << i << "] = (" << p->GetNum() << "," << p->GetF() << ")" << endl;

	/**
	* point to member of class pointer
	*/
	int (A::*pfun)(int);
	pfun = A::value;
	A obj(10);
	cout << (obj.*pfun)(15) << endl;
	A *pc = &obj;
	cout << (pc->*pfun)(15) << endl;

}
