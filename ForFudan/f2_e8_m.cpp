/**
 * 虚函数的多态性
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
	cout << "两点距离：" << a.Distance(b) << endl;
	Cow cw = {3, 5};
	Line s(7.8, 9.8, 34.5, 67.8, cw);
	Disp(s);
	Line s1(s);
	cout << "使用 Display 函数输出线段属性如下：" << endl;
	s1.Display();
	cout << "线段长度:" << s1.Display() << endl;
	cout << "线段面积：" << s1.Area() << endl;
	cout << "基类对象的属性" << endl;
	a.Display();
	a = s;
	cout << "派生类的对象赋给基类对象" << endl;
	a.Display();
	cout << "面积:" << a.Area() << endl;
	cout << "派生类的对象赋给基类的指针" << endl;
	Point *p = &s1;
	d.Display();
	cout << "面积：" << d.Area() << endl; 
	return 0;
}
