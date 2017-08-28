#include <iostream>
#include "../GCC_4_7_0/1/Sales_item.h"

int main()
{
	Sales_item book1, book2;
	
	std::cin >> book1 >> book2;
	
	std::cout << book1 + book2 << std::endl;
	
	return 0;
}

