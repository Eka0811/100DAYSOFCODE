//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main()
{
    int pi = 3.14;
    int r, area, circum;
    printf ("Enter the radius of the circle :");
    scanf ("%d", &r);
    area = pi * r * r;
    circum = 2 * pi * r;
    printf ("Area of the circle is :%d\n", area);
    printf ("Circumference of the circle is :%d\n", circum);
    return 0;
}