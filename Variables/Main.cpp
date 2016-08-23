//
// Aaron Andrews
// 8/22/16
// aaron.andrews@students.aie.edu.au
// 

#include <iostream>

int main()
{
	printf("Hello World");

	int demoInt = 12, demoInt1 = demoInt + 12;

	printf("\n%d, %d", demoInt, demoInt1);
	std::cout << std::endl << demoInt << ", " << demoInt1 << std::endl;
	std::cout << 2 / 3 + 3 / 5 << std::endl;
	std::cout << 17 % 2 << std::endl;
	std::cout << 2 % 17 << std::endl;
	std::cout << 23 % 15 % -2 << std::endl;
	std::cout << 25 * 1 / 2 << std::endl;
	std::cout << 25 * (1 / 2) << std::endl;
	std::cout << 235 / 8 + 7 << std::endl;
	std::cout << 235 / 8.0 + 7 << std::endl;
	std::cout << ((20 + 1) / 2 - 2.0) / (23 + 3)*0.2 << std::endl;


	getchar();
}