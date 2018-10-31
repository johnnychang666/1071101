#include<stdio.h>
#include<stdlib.h>

unsigned long long int fibonacci(unsigned int n);


int main() {
	for (int i = 3; i <=12; i++) {
		printf("%llu\n", fibonacci(i));
	}
	system("pause");
	return 0;
}


unsigned long long int fibonacci(unsigned int n)
{
	unsigned long long int temp1 = 0, temp2 = 1;
	unsigned long long int result = 0;
	for (int i = 0; i < n - 2; i++) {
		result = temp1 + temp2;
		temp1 = temp2;
		temp2 = result;
	}
	return  result;
}