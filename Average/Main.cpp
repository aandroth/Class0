//
// Aaron Andrews
// 8/22/16
// aaron.andrews@students.aie.edu.au
// 

#include <iostream>

int main()
{

	int var0, var1, var2, var3, var4;

	scanf_s("%d%d%d%d%d", &var0, &var1, &var2, &var3, &var4);

	float varAverage = (var0 + var1 + var2 + var3 + var4) / 5.0;

	printf("%f", varAverage);

	getchar();
}