#include <iostream>
using namespace std;

class object 
{
	private:
		int val;
	public:
		object(): val(0)
		{
			cout << "Default constructor for object" << endl;
		}
		object(int i):val(i)
		{
			cout << "Constructor for object" << val << endl;
		}
		~object()
		{
			cout << "Destructor for object" << val << endl;
		}
};

class container
{
	private:
		object one;
		object two;
		int data;
	public:
		container():data(0)
		{
			cout << "Default construct for container" << endl;
		}
		container(int i, int j, int k);
		~container()
		{
			cout << "Destructor for containter" << data << endl;
		}
};

container::container(int i, int j, int k): two(i), one(j)
{
	data = k;
	cout << "Constructor for container" << data << endl;
}

int main()
{
	container obj, anObj(5, 6, 10);
}
