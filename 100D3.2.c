//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    int a , b , swap=0;
    printf ("Enter two numbers :");
    scanf ("%d %d", &a, &b);
    swap = a;
    a = b;
    b = swap;
    printf ("After swapping the two numbers are : %d %d", a , b);
    return 0;
}