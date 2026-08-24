//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
    int a,b,sum,diff,pro,quo;
    printf ("Enter two numbers :");
    scanf ("%d %d", &a , &b);
    sum = a + b;
    diff = a - b;
    pro = a * b;
    quo = a / b;
    printf ("Sum of the two numbers is :%d\n", sum);
    printf ("Difference of the two numbers is :%d\n", diff);
    printf ("Product of the two number is :%d\n", pro);
    printf ("Quotient of the two number is :%d\n", quo);
    return 0;
}