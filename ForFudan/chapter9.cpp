#include <iostream>
#include <cstring>
using namespace std;

class str
{
	private:
		char *st;
	public:
		str(char *s);
		str(str &s);
		str &operator=(str &a);
		str &operator=(char *s);
		void print() {cout << st << endl;}
		~str() {delete st;}
};

str::str(char *s)
{
	st = new char[strlen(s) + 1];
	strcpy(st, s);
}

str::str(str &s)
{
	st = new char[strlen(s.st) + 1];
	strcpy(st, s.st);
}

str& str::operator=(str &a)
{
	if (this == &a)
		return *this;
	delete st;
	st = new char[strlen(a.st) + 1];
	strcpy(st, a.st);
	return *this;
}

str& str::operator=(char *s)
{
	delete st;
	st = new char[strlen(s) + 1];
	strcpy(st, s);
	return *this;
}

class test
{
	private:
		int i;
		float f;
		char ch;
	public:
		test(int a = 0, float b = 0, char c = '\0')
		{
			i = a;
			f = b;
			ch = c;
		}
		friend ostream &operator << (ostream &, test);
		friend istream &operator >> (istream &, test &);
};

ostream &operator << (ostream &stream, test obj)
{
	stream << obj.i << ",";
	stream << obj.f << ',';
	stream << obj.ch << endl;
	return stream;
}

istream &operator >> (istream & t_stream, test &obj)
{
	t_stream >> obj.i;
	t_stream >> obj.f;
	t_stream >> obj.ch;
	return t_stream;
}

class number
{
	int num;
	public:
		number(int i) 
		{
			num = i;
		}
		friend int operator++();
		friend int operator++(int);
		void print()
		{
			cout << "num=" << num << endl;
		}
};

int number::operator++()
{
	num++;
	return num;
}

int number::operator++(int)
{
	int i = num;
	num++;
	return i;
}

int main()
{
	/**
	* 9.1
	*/
//	str s1("We"),s2("They"), s3(s1);
//	s1.print();
//	s2.print();
//	s3.print();
//	s3 = "Go home!";
//	s3 = s3;
//	s1.print();
//	s2.print();
//	s3.print();

	/**
	* 9.2
	*/
//	test A(45, 8.5, 'W');
//	operator << (cout, A);
//	test B, C;
//	cout << "Input as i f ch:";
//	operator >> (cin, B);
//	operator >> (cin, C);
//	operator << (cout, B);
//	operator << (cout, C);

	/**
	*	9.3
	*/
	number n(10);
	int i = ++n;
	cout << "i=" << i << endl;
	n.print();
	i = n++;
	cout << "i=" << i << endl;
	n.print();
	
}
