/**
 * �麯���Ķ�̬��
 * todo 
 */ 
#include <iostream>
#include "f2_e8.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	Point a;
	Point b(7.8, 9.8), c(34.5, 67.8);
	a = c;
	a.Display();
	b.Display();
	cout << "������룺" << a.Distance(b) << endl;
	Cow cw = {3, 5};
	Line s(7.8, 9.8, 34.5, 67.8, cw);
	Disp(s);
	Line s1(s);
	cout << "ʹ�� Display ��������߶��������£�" << endl;
	s1.Display();
	cout << "�߶γ���:" << s1.Display() << endl;
	cout << "�߶������" << s1.Area() << endl;
	cout << "������������" << endl;
	a.Display();
	a = s;
	cout << "������Ķ��󸳸��������" << endl;
	a.Display();
	cout << "���:" << a.Area() << endl;
	cout << "������Ķ��󸳸������ָ��" << endl;
	Point *p = &s1;
	d.Display();
	cout << "�����" << d.Area() << endl; 
	return 0;
}
