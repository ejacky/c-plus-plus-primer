#include <iostream>
#include <string>

using namespace std;
void test()
{
	cout << "this is test" << endl;
}

void swap(string &s1, string &s2)
{
	string temp = s1;
	s1 = s2;
	s2 = temp;
	cout << "hello" << endl;
	cout << "swap ; str1 = " << s1 << " str2=" << s2 << endl;
}
int main()
{
	string str1("now "), str2("past");
	swap(str1, str2);
	//test();
	cout << "return : str = " << str1 << " str2=" << str2 << endl;
}




