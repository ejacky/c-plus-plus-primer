#include <iostream>
using namespace std;

class A
{
	void show()
	{
		cout << " hello world" << endl;
	}
	public:
		A()
		{
			cout << "this is A constructor" << endl;
		}
		display();
};

A::display()
{
	show();
}

class B: public A
{
	public:
		B()
		{
			cout << "this is B constructor" << endl;
		}
};

int main()
{
//	A a;
//	a.display();

	B b;   // first base constructor then deried class constructor
}
