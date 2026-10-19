//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
int main() 
{
    char s[1000];
    scanf("%999s", s);
    int lastSeen[256];
    for (int i = 0; i < 256; i++) 
    {
        lastSeen[i] = -1;
    }
    int start = 0, maxLength = 0;
    for (int i = 0; s[i] != '\0'; i++) 
    {
        unsigned char ch = (unsigned char)s[i];
        if (lastSeen[ch] >= start) 
        {
            start = lastSeen[ch] + 1;
        }
        lastSeen[ch] = i;
        int length = i - start + 1;
        if (length > maxLength) 
        {
            maxLength = length;
        }
    }
    printf("%d\n", maxLength);
    return 0;
}