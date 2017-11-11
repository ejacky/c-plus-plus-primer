#include <iostream>
using namespace std;

void e1()
{
	double *p;
	p = new double[3];
	for (int i = 0; i < 3; i++)
		cin >> *(p+i);
	for (int i = 0; i < 3; i++)
		cout << *(p+i) << " ";
	delete p;	
}

template <class T>
void max(T m1, T m2, T m3)
{
	T temp;
	temp = m1;
	if (m1 > m2) {
		temp = m1;
		m1 = m2;
		m2 = temp;
	}	
	if (m2 > m3) {
		temp = m2;
		m2 = m3;
		m3 = temp;
	}
	cout << m1 << "," << m2 << "," << m3;
} 

void e2()
{
	max("abf", "abz", "aba");
	cout << endl;
	max(18,9 ,24);
	cout << endl;
	max(2.01, 2.28, 2.23);
	cout << endl;	
}

#include "f2_e3.h"
void e3()
{
	Point a;
	Point b(7.8, 9.8), c(34.5, 67.8);	
	a = c; // what ?
	cout << "Á½µã¾àÀë£º" << a.Distance(b) << endl; 
}


int main()
{
	//e1();
	//e2();
	e3();
}
