/**
* vector ������ʹ�� 
*/
 
#include <iostream>
#include <vector>
using namespace std;

class SeqList
{
	char name[10];
	public:
		void DispName()
		{
			cout << name;
		}
		void SetName(char b[])
		{
			strcpy(name, b);
		}
		void Joseph(vector<SeqList>&);
};

void SeqList::Joseph(vector<SeqList>&c)
{
	int m, star, i, j, k;
	cout << "����������"
	
}
