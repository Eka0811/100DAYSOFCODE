//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main()
{
    int t, hour,min,sec;
    printf ("Enter time in seconds :");
    scanf ("%d", &t);
    hour = t/3600;
    min = (t%3600)/60;
    sec = (t%3600)%60;
    printf ("Time in hours:minutes:seconds format is :%d:%d:%d", hour , min , sec);
    return 0;
}