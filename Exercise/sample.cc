#include <iostream>
int main()
{
//    std::cout << "Enter two numbers:" << std::endl;
//    int v1 = 0, v2 = 0;
//    std::cin >> v1 >> v2;
//    std::cout << "The sum of " << v1; 
//	std::cout << " and " << v2;
//	std::cout << " is " << v1 + v2 << std::endl;

// /*
// * just for test!
// *
// */  

/*
*   
*/
//	std::cout << /* "*/" /* "/*" */;

//	int sum = 0, val = 10;
//	while (val >= 0) {
//		sum += val;
//		--val;
//	}
//	std::cout << "Sum of 1 to 10 inclusive is "
//			  << sum << std::endl;

// 1.11
//	int v1, v2, max, min;
//	std::cin >> v1 >> v2;
//	
//	if (v1 >= v2) {
//		max = v1;
//		min = v2;
//	} else {
//		max = v2;
//		min = v1;
//	}
//	
//	while (min <= max) {
//		std::cout << min << std::endl;
//		min++;
//	}

// 1.4.3
//	int sum = 0, value = 0;
//	
//	while (std::cin >> value)
//		sum += value;
//	std::cout << "Sum is " << sum << std::endl;

// 1.4.4
	int currVal = 0, val = 0;
	if (std::cin >> currVal) {
		int cnt = 1;
		while (std::cin >> val) {
			if (val == currVal)
				++cnt;
			else {
				std::cout << currVal << " occurs "
						  << cnt << " times " << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << " occurs "
				  << cnt << " times " << std::endl;
	}
    return 0;
}
