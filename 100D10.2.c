//Write a program to display the day of the week based on a number (1–7) using switch-case.
#include <stdio.h>
int main()
{
    int c;
    printf ("Press 1 to display first day of the week.");
    printf ("Press 2 to display second day of the week.");
    printf ("Press 3 to display third day of the week.");
    printf ("Press 4 to display fourth day of the week.");
    printf ("Press 5 to display fifth day of the week.");
    printf ("Press 6 to display sixth day of the week.");
    printf ("Press 7 to display seventh day of the week.");
    printf("Enter choice");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        printf ("Monday.");
        break;

    case 2:
        printf ("Tuesday.");
        break;
    case 3:
        printf ("Wednesday.");
        break;
    case 4:
        printf ("Thursday.");
        break;
    case 5:
        printf ("Friday.");
        break;
    case 6:
        printf ("Saturday.");
        break;
    case 7:
        printf ("Sunday.");
        break;
    }
    return 0;
}