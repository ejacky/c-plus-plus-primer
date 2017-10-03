#include <iostream>
using namespace std;

class Point
{
	private:
		int x, y;
	public:
		Point(int a, int b) 
		{
			x = a;
			y = b;
		}
		void Show()
		{
			cout << "x = " << x << ", y =" << y << endl;
		}
		
		void SayHi()
		{
			cout << "hello world!" << endl;
		}
};

class Rectangle: private Point 
{
	private: 
		int H, W;
	public:
		Rectangle(int a, int b, int h, int w): Point(a, b)
		{
			H = h;
			W = w;
		}
		void Show()
		{
			Point::Show();
			cout << "H = " << H << " , W = " << W << endl;
		}
};

class Test: public Rectangle
{
	public:
		Test(int a, int b, int h, int w): Rectangle(a, b, h, w) {}
		void Show() {Rectangle:Show();}
};

class A
{
	private:
		int a;
	public:
		void func() {cout << "a.func" << endl;}
		void setA(int x) {a = x;}
		void showA() {cout << "a=" << a << endl;}
};

class B
{
	private:
		int b;
	public:
		void func() {cout << "b.func" << endl;}
		void setB(int x) {b = x;}
		void showB() {cout << "b="<<b<<endl;}
};

class C: public A, public B
{
	private: 
		int c;
	public:
		void setC(int x, int y) 
		{
			c = x;
			setB(y);
		}
		void showC()
		{
			showB();
			cout << "c=" << c << endl;
		}
		void hun1() {A::func();}
		void hun2() {B::func();}
};


int main()
{
//	Test a(1,2,3,4);
//	a.Show();
//	Rectangle b(1,2,3,4);
//	b.Show();
//	b.SayHi();

	/**
	* more inheril
	*/
//	C obj;
//	obj.setA(53);
//	obj.showA();
//	obj.setC(55, 58);
//	obj.showC();
//	obj.setB(56);
//	obj.showB();

	/**
	* ambiguity
	*/
	C obj;
	obj.A::func();
	obj.B::func();
	obj.hun1();
	obj.hun2();
	C *c1 = new C;
	c1->A::func();
	c1->B::func();
}
