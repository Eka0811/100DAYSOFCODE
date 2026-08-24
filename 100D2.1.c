//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    int l,b,area,peri;
    printf ("Enter the length and breadth of the rectangle :");
    scanf ("%d %d", &l , &b);
    area = l * b;
    peri = 2 * (l+b);
    printf ("Area of the rectangle is : %d\n", area);
    printf ("Perimeter of the rectangle is : %d\n", peri);
    return 0;
}