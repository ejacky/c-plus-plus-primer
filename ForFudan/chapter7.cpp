#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <class T>
class Max4
{
	T a, b, c, d;
	T Max(T a, T b)
	{
		return (a > b)? a: b;
	}
	public:
		Max4(T, T, T, T);
		T Max(void);

};
template <class T>
Max4 <T>::Max4(T x1, T x2, T x3, T x4): a(x1), b(x2), c(x3), d(x4){}
template <class T>
T Max4<T>::Max(void)
{
	//cout << "hello" << endl;
	return Max(a, b);
	//return Max(Max(a, b), Max(c, d));
}

template <class T, int size = 4>
class Sum
{
	T m[size];
	public:
		Sum(T a, T b, T c, T d)
		{
			m[0] = a;
			m[1] = b;
			m[2] = c;
			m[3] = d;
		}
		T S()
		{
			return m[0] + m[1] + m[2] + m[3];
		}
};

template <typename T>
class Point
{
	T x, y;
	public:
		Point(T a, T b)
		{
			x = a;
			y = b;
		}
		void display()
		{
			cout << x << "," << y << endl;
		}
};

template <typename T>
class Line:public Point<T>
{
	T x2, y2;
	public:
		Line(T a, T b, T c, T d): Point<T> (a, b){x2 = c; y2 = d;}
		void display()
		{
			Point <T>::display();
			cout << x2 << "," << y2 << endl;
		}
};

int main()
{
//	Max4 <char> C('W', 'w', 'a', 'A');
//	//cout <<  "return = " << C.Max() << endl;
//	Max4 <int> A(-25, -67, -66, -256);
//	cout << "max =" << A.Max() << endl;
//	Max4 <double> B(1.25, 4.3, -8.6, 3.5);
//	cout << C.Max() << " " << A.Max() << " " << B.Max() << endl;

	/**
	* template sum
	*/
//	Sum <int, 4> num1(-23, 5, 8, -2);
//	Sum <float, 4> f1(3.5f, -8.5f, 8.8f, 9.7f);
//	Sum <double, 4> d1(355.4, 253.8, 456.7, -67.8);
//	Sum <char, 4> e1('W', -2, -1, -1);
//	cout << num1.S() << " ," << f1.S() << " , " << d1.S() << " ," << e1.S() << endl;

	/**
	* template Point inhertance from template Line
	*/
//	Point <double> a(3.5, 8.8);
//	a.display();
//	Line <int> ab(4, 5, 6, 7);
//	ab.display();
//	Line <double> ad(4.5, 5.5, 6.5, 7.5);
//	ad.display();

	/**
	*  pointer and copy function
	*/
	double a[] = {1.1, 4.4, 3.3, 2.2};
	vector <double> va(a, a+4), vb(4);
	typedef vector<double>::iterator iterator;
	iterator first = va.begin();
	for (first; first < va.end(); first++)
		cout << *first << " ";
//	for (--first; first > (va.begin() - 1); first--)
//		cout << *first << " ";
	copy(va.begin(), va.end()), ostream_iterator<double>(cout, " "));
	cout << endl;
	
	typedef vector<double>::reverse_iterator reverse_iterator;
	
	reverse_iterator last = va.rbegin();
	for (last; last < va.rend(); last++)
		cout << *last << " ";
	for (--last; last > va.rbegin() - 1; last--)
		cout << *last << " ";
	copy(va.rbegin(), va.rend(), ostream_iterator<double>(cout, " "));
}

