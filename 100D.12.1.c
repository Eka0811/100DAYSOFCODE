//Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.
#include <stdio.h>
int main()
{
    int n, fine=0;
    printf ("Enter the number of days user was late.");
    scanf ("%d", &n);
    if (n>1 && n<=5)
    {
        fine = n*2;
        printf ("The fine is equals to : ", fine);
    }
    else if (n>6 && n<=10)
    {
        fine = n*4;
        printf ("The fine is equals to : ", fine);
    }
    else if (n>11 && n<=30)
    {
        fine = n*6;
        printf ("THe fine is equal to : ", fine);
    }
    else if (n>31)
    {
        printf ("Membership Cancelled.");
    }
    else
    {
        printf ("User wasn't late.");
    }
    return 0;
}