#include <stdio.h>
#include <stdlib.h>
int  integerPower(int base, int exponent); int tcm(int i, int j);

int main(void)
{
	int a, b,sum;
	printf("Please enter two integers:");
	scanf_s("%d%d", &a, &b);
	printf("The sum is %d\n", integerPower(a,b));
	system("pause");
	
}


	int  integerPower(int base, int exponent)
	{
		if (exponent < 0) return 0;
		return (exponent == 0) ? 1 : base * integerPower(base, exponent - 1);
	}
