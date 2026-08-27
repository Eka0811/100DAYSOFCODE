//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main()
{
    char ch;
    printf ("Enter a character :");
    scanf ("%c", &ch);
    if (ch>='A' && ch<='Z')
    {
        printf ("The character is an uppercase alphabet.");
    }
    else if (ch>='a' && ch<='z')
    {
        printf ("The character is a Lowercase alphabet.");
    }
    else
    {
        printf ("The character is a digit or special character.");
    }
    return 0;
}