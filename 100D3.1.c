//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    int temp;
    printf ("Enter temperature in celcius:");
    scanf ("%d", &temp);
    temp = (temp * 9/5) + 32;
    printf ("Temperature in fahrenheit is : %d\n" , temp);
    return 0;
}