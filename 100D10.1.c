//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main()
{
    int s1,s2,s3;
    printf ("Enter three sides of a traingle :");
    scanf ("%d %d %d", &s1 , &s2 , &s3);
    if (s1 == s2 && s2 == s3)
    {
        printf ("The triangle is Equlateral.");
    }
    else if (s1 == s2 || s2 == s3)
    {
        printf ("The triangle is Isosceles.");
    }
    else
    {
        printf ("The triangle is Scalene.");
    }
    return 0;
}