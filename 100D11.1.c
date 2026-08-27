//Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>
int main()
{
    int c;
    printf ("Enter 1 to display the first month of the year");
    printf ("Enter 2 to display the second month of the year");
    printf ("Enter 3 to display the third month of the year");
    printf ("Enter 4 to display the fourth month of the year");
    printf ("Enter 5 to display the fifth month of the year");
    printf ("Enter 6 to display the sixth month of the year");
    printf ("Enter 7 to display the seventh month of the year");
    printf ("Enter 8 to display the eighth month of the year");
    printf ("Enter 9 to display the ninth month of the year");
    printf ("Enter 10 to display the tenth month of the year");
    printf ("Enter 11 to display the eleventh month of the year");
    printf ("Enter 12 to display the twelth month of the year");
    scanf ("%d", &c);
    switch(c)
    {
        case 1:
        printf ("January");
        printf ("31 days.");
        break;
        case 2:
        printf ("February");
        printf ("28 days.");
        break;
        case 3:
        printf ("March");
        printf("31 days.");
        break;
        case 4:
        printf ("April");
        printf ("30 days.");
        break;
        case 5:
        printf ("May");
        printf ("31 days");
        break;
        case 6:
        printf ("June");
        printf ("30 days.");
        break;
        case 7:
        printf ("July");
        printf ("31 days.");
        break;
        case 8:
        printf ("August");
        printf ("31 days.");
        break;
        case 9:
        printf ("September");
        printf ("30 days.");
        break;
        case 10:
        printf ("October");
        printf ("31 days.");
        break;
        case 11:
        printf ("November");
        printf ("30 days.");
        break;
        case 12:
        printf ("December");
        printf ("31 days.");
        break;
    }
    return 0;
}
