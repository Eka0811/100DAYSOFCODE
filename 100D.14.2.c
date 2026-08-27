//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n,i,pro=0;
    printf ("Enter the value of n : ");
    scanf ("%d", &n);
    for (i=2;i<=n;i+=2)
    {
        pro = pro * i;
    }
    printf ("product of even numbers = %d\n", pro);
    return 0;
}