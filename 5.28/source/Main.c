#include <stdio.h>
#include <stdlib.h>
int change(char a);

int main(void)
{
	char a,c;

	printf("Please enter a uppercase letter:");
	scanf_s("%c", &a);
	if (a < 97 || a>122) printf("ERROR.\n");
	else	printf("The Lower case letter is %2c\n",change(a));
	system("pause");
	return 0;
}

int change(char a)
{	
	a = a +32 ;
	return a;
}