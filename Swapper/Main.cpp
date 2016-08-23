//
// Aaron Andrews
// 8/22/16
// aaron.andrews@students.aie.edu.au
// Get two number from the user and swaps them

#include <iostream>

int main()
{

	int demoInt = 12, demoInt1 = demoInt + 12;

	scanf_s("%d", &demoInt);
	scanf_s("%d", &demoInt1);
	printf("%d, %d\n", demoInt, demoInt1);

	int temp = demoInt;
	demoInt = demoInt1;
	demoInt1 = temp;

	printf("%d, %d\n", demoInt, demoInt1);

	int myMoney = 128;
	int cookiePrice = 33;
	// Calculate the change if the maximum number of cookies are bought.
	int change = myMoney % cookiePrice;
	// Calculate number of cookies bought.
	int numCookies = ((myMoney - change) / cookiePrice);
	printf("%d\n, %d\n, %d\n, %d\n", myMoney, cookiePrice, change, numCookies);


	getchar();
}