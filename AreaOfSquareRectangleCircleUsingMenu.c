// Write a program to find area of Square, Rectangle & Circle depending upon the choice of the user.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Function declarations
int square1();
int rectangle();
float circle();

void main()
{
    float AreaC;
    int x, s, l, b, r, AreaS, AreaR;
    // Display menu and take input from user
    printf("MAIN MENU\n------------\n1::Square\n2::Rectangle\n3::Circle\n------------\nEnter your choice: ");
    scanf("%d", &x);

    switch (x)
    {
 // Square
    case 1: 
        // Taking input from user
        printf("Enter side of square\n");
        scanf("%d", &s);
        // Calling square of area function
        AreaS = square1(s);
        // Display result
        printf("Area of square is %d", AreaS);
        break;
 // Rectangle
    case 2: 
        // Taking input from user
        printf("Enter length and breadth of rectangle:\n");
        scanf("%d%d", &l, &b);
        // Calling Rectangle of area function
        AreaR = rectangle(l, b);
        // Display result
        printf("Area of rectangle is %d", AreaR);
        break;
  // Circle
    case 3: 
        // Taking input from user
        printf("Enter the radius of circle\n");
        scanf("%d", &r);
        // Calling circle of area function
        AreaC = circle(r);
        // Display result
        printf("Area of circle is %.2f", AreaC);
        break;

    default:
        printf("Invalid input");
    }
}
// Function definitions of Area of Square, Rectangle and Circle
int square1(int side)
{
    int SquareArea = side * side;
    return SquareArea;
}
int rectangle(int length, int breadth)
{
    int RectangleArea = length * breadth;
    return RectangleArea;
}
float circle(int radius)
{
    float pi = 3.14;
    float CircleArea = radius * radius * pi;
    return CircleArea;
}