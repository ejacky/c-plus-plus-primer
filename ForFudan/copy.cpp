#include <iostream>
#include <iterator>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str1 ="hello world";
	string str2 = str1;
	reverse(&str1[0], &str1[0] + 11);
	cout << str1 << endl;
	
	copy(&str1[0], &str1[0] + 12, &str2[0]);
	cout << str2 << endl;
	
	reverse_copy(&str2[0], &str2[0] + 12, ostream_iterator<char>(cout));
	

}
