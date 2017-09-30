#include <iostream>
#include <string>
using namespace std;

void change(const string&);

int a[] = {2, 4, 6, 8, 10, 12};
int &index(int i);
float *input(int &);
string input2(const int);

double max(double, double);
int max(int, int);
char max(char, char);
int max(int, int, int); 

template <class T>
T max1(T m1, T m2)
{
	return (m1 > m2)? m1: m2;
}

int main()
{
//	string str("Can you change it?");
//	change(str);
//	cout << str << endl;
	
//	index(3) = 16;
//	index(3) = 15;
//	cout << index(3) << endl;

//	int num;
//	float *data;
//	data = input(num);
//	if (data) {
//		for (int i = 0; i < num; i++)
//			cout << data[i] << " ";
//		delete data;
//	}

//	int n;
//	cout << "Input n=";
//	cin >> n;
//	string str = input2(n);
//	cout << str << endl;

cout << max1(2.5, 17.54) << " " << max1(56, 8) << " " << max1('w', 'p') << endl;
cout << max(5,9,4) << " " << max(5, 4, 9) << " " << endl;
}

double max(double m1, double m2) 
{
	return (m1 > m2)? m1:m2;
}

int max(int m1, int m2) 
{
	return (m1 > m2)? m1:m2;
}

char max(char m1, char m2) 
{
	return (m1 > m2)? m1:m2;
}

int max(int m1, int m2, int m3)
{
	int t = max(m1, m2);
	return max(t, m3);
}
string input2(const int n)
{
	string s1, s2;
	for (int i=0; i<n; i++) {
		cin >> s1;
		s2 = s2 + s1 + " ";
	}
	return s2;
}

float *input(int &n)
{
	cout << "Input a number:";
	cin >> n;
	if (n <= 0) return NULL;
	
	float *buf = new float[n];
	if (buf == 0) return NULL;
	
	for (int i = 0; i < n; i++)
		cin >> buf[i];
	return buf;
}

//void change(const string &s)
//{
//	s = s + " No!";
//	cout << s << endl;
//}

int &index(int i)
{
	return a[i];
}


