/*Accept 2 numbers from user.Write a function to display addition of those numbers.
Numbers should be accepted in main () and sum should be displayed in function*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// Function declaration
void addition(int x, int y);

void main()
{
	int a, b, sum;
	// Accept two numbers
	printf("Enter two numbers:\n");
	scanf("%d%d", &a, &b);
	// Call function
	addition(a, b);
}
// Function definition
void addition(int x, int y)
{
	int sum = x + y;
	// Display sum
	printf("The addition of given numbers is :%d", sum);
}
