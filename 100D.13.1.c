//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main()
{
    int a,b,c,sum=0,diff=0,pro=0,div=0,rem1=0,rem2=0;
    printf ("Enter two numbers : ");
    scanf ("%d %d", &a, &b);
    printf ("Press 1 for addition.");
    printf ("Press 2 for substraction.");
    printf ("Press 3 for multiplication.");
    printf ("Press 4 for division.");
    printf ("Press 5 for remainder.");
    scanf ("%d", &c);
    switch(c)
    {
        case 1:
        sum = a+b;
        printf ("Sum of the two numbers is : ",sum);
        break;
        case 2:
        diff = a-b;
        printf ("Difference of the two numbers is : ",diff);
        break;
        case 3:
        pro = a*b;
        printf ("Product of the two numbers is : ",pro);
        break;
        case 4:
        div = a/b;
        printf ("Division of the two numbers is : ",div);
        break;
        case 5:
        rem1 = a%10;
        rem2 = b%10;
        printf ("Remainder of the two numbers is : ",rem1 ,rem2);
        break;
    }
    return 0;
}