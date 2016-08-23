//
// Aaron Andrews
// 8/22/16
// aaron.andrews@students.aie.edu.au
// 

#include <iostream>

int main()
{
	char char0 = 'a', char1 = 'b';

	std::cin >> char0 >> char1;

	char avgChar = (char0 + char1) / 2;

	printf("%c\n", avgChar);


	getchar();
}