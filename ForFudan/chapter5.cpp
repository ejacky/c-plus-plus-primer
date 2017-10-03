class Test
{
	static int x;
	int n;
	public:
		Test() {}
		Test(int a, int b)
		{
			x =a;
			n =b;	
		}	
		static int func() {return x;}
		static void sfunc(Test &r, int a) {r.n = a;}
		int Getn() {return n;}
};
int Test::x = 25;
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
//		static test1 a(3);
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
	One Obj1(5);
	Two Obj2(8);
	cout << Obj1.GetX() << " " << Obj2.Gety() << endl;
	Obj1.func(Obj2);
	cout << Obj1.GetX() << " " << Obj2.Gety() << endl;


}
