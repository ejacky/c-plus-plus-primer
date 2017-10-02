#include <iostream>
using namespace std;

class Point
{
	private:
		int x, y;
		
	public:
		void Setxy(int a, int b)
		{
			x = a;
			y = b;	
		} 
		
		void Move(int a, int b)
		{
			x = x + a;
			y = y + b;
		}
		
		void Display()
		{
			cout << x << ", " << y << endl;
		}
		
		int Getx()
		{
			return x;
		}
		
		int Gety()
		{
			return y;
		}
};

void print(Point *a)
{
	a->Display();
}

void print(Point &a)
{
	a.Display();
}

class Point1 
{
	private:
		int x, y;
	public:
		//Point1();
		Point1(int = 0, int = 0);	
		~Point1();
};

//Point1::Point1():x(0), y(0)
//{
//	cout << "Initializing default" << endl;	
//} 

Point1::Point1(int a, int b): x(a), y(b)
{
	cout << "Init " << a << ", " << b << endl;
}

Point1::~Point1()
{
	cout << "Destructor is active" << endl;
}

class Point2
{
	private: 
		int X, Y;
	public:
			Point2(int a=0, int b=0) {
				X = a;
				Y = b;
				cout << "init" << endl;
			}
			
			Point2(const Point2 &p);
			int GetX() {
				return X;
			}
			int GetY() {
				return Y;
			}
			
			void Show() {
				cout << "X=" << X << ", Y=" << Y <<endl;
			}
			~Point2() {
				cout << "delete ..." << X << "," << Y << endl;
			}
};

Point2::Point2(const Point2 &p)
{
	X = p.X;
	Y = p.Y;
	cout << "Copy init" << endl;
}

void display(Point2 p)
{
	p.Show();
} 

void disp(Point2 &p)
{
	p.Show();
}

Point2 fun()
{
	Point2 A(101, 202);
	return A;
}

class Rectangle
{
	Point Loc;
	int H, W;
	public:
		void Set(int x, int y, int h, int w);
		Point * GetLoc();
		int GetHeight() {
			return H;
		}	
		int GetWidth() {
			return W;
		}
};

void Rectangle::Set(int x, int y, int h, int w)
{
	Loc.Setxy(x, y);
	H = h;
	W = w;
}

Point * Rectangle::GetLoc()
{
	return &Loc;	
} 
 
 
int main()
{
//	Point A, B, *p;
//	Point &RA = A;
//	A.Setxy(25, 25);
//	B = A;
//	p = &B;
//	p->Setxy(112, 115);
//	print(p);
//	p->Display();
//	RA.Move(-80, 23);
//	print(A);
//	print(&A);

//	Point1 A;
//	Point1 B(15, 25);
//	Point1 C[2];
//	Point1 D[2] = {Point1(5, 7), Point1(8, 12)};

//Point1 *ptr = new Point1[2];
//delete []ptr;

//	Point2 A(42, 35);
//	
//	Point2 B(A);
//	Point2 C(58, 94);
//	cout << "called display(B)" << endl;
//	
//	display(B);
//	cout << "next.." << endl;
//	cout << " called disp(B)" << endl;
//	disp(B);
//	cout << " call C=fun()" << endl;
//	
//	C=fun();
//	cout << " called disp(C)" << endl;
//	disp(C);
//	cout << "out.." << endl;

Rectangle rect;
rect.Set(10, 2, 25, 20);
cout << rect.GetHeight() << ", " << rect.GetWidth() << ", ";
Point *p = rect.GetLoc();
cout << p->Getx() << ", " << p->Gety() << endl;
	
}
