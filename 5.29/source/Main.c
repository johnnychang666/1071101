#include<stdio.h>
#include<stdlib.h>
void LCM(int i, int j);
int main(void)
{
	int a, b,lcm;
	printf("Please enter two integers:");
	scanf_s("%d%d", &a, &b);
	 LCM(a, b);
	
	system("pause");
	return 0;
}

void LCM(int i, int j)
{
	int num;
	num = i * j;
	while (i > 0 && j > 0)
	{

		if (i > j)
			i = i % j;
		else
			j = j % i;
	}
	if (i == 0) {
		printf("�̤j���]�Ƭ� %d\n", j);
		printf("�̤p�����Ƭ� %d\n", (num / j));
	}
	else {
		printf("�̤j���]�Ƭ� %d\n", i);
		printf("�̤p�����Ƭ� %d\n", (num / i));
	}
}