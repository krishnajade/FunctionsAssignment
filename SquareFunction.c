/*Write a function to dispaly square of a number. Number should be accepted in main() and 
function should return the square to main() */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int square1(int x);
void main()
{
	int a, Square;
	printf("Enter a number: ");
	scanf("%d", &a);
	Square = square1(a);
	printf("Square of the given number is %d\n", Square);
}

int square1(int x) {
	int result = x * x;
	return result;
}