#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char check(int a);

void main()
{
	int num;
	char ch;
	printf("Enter a number\n");
	scanf("%d", &num);
	ch = check(num);
	printf("%c", ch);
}
char check(int a)
{
	int digits = 0;
	while (a != 0)
	{
		a /= 10;
		digits++;
	}
	if (digits == 4)
		return 'T';
	else
		return 'F';
}