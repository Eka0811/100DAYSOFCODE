//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    float r1,r2;
    printf ("Enter the values of a , b, c :");
    scanf ("%d %d %d", &a , &b , &c);
    d = (b*b) - (4*a*c);
    if (d>0)
    {
        r1 = (-b + sqrt(d))/(2*a);
        r2 = (-b - sqrt(d))/(2*a);
        printf ("The roots are real and distinct.\n");
        printf ("The roots are : %f and %f", r1 , r2);
    }
    else
    {
        printf ("The roots are imaginary.");
    }
    return 0;
}