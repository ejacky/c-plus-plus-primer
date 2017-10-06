#include "equation.h"
void Read(float &, float &, float &);
int main(void)
{
	float a, b, c;
	cout << "this is ax^2 + bx +c = 0" << endl;
	for (;;) {
		Read(a, b, c);
		if (a == 0) return -1;
		FindRoot obj(a, b, c);
		obj.Find();
		obj.Display();
	}
}

void Read(float &a, float&b, float&c)
{
	cout << "input a:" ;
	cin >> a;
	if (a == 0) {
		getchar();
		return;
	}
	cout << "input b:";
	cin >> b;
	cout << "input c:";
	cin >> c;
}
