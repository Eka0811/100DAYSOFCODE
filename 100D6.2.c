//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main()
{
    int n;
    printf ("Enter a number :");
    scanf("%d", &n);
    if (n>0)
    {
        printf("the number is positive.");
    }
    else if(n<0)
    {
        printf("the number is negative.");
    }
    else
    {
        printf("The number is zero.");
    }
    return 0;
}