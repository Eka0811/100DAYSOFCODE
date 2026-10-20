//Find the longest word in a sentence.
#include <stdio.h>
int main()
{
    char sentence[20];
    char word[10];
    char longest[10] = "";
    int i, j = 0;
    printf("Enter a sentence: ");
    scanf(" %[^\n]", sentence);
    for (i = 0; ; i++)
    {
        if (sentence[i] != ' ' && sentence[i] != '\0')
        {
            word[j++] = sentence[i];
        }
        else
        {
            word[j] = '\0';
            if (strlen(word) > strlen(longest))
            {
                strcpy(longest, word);
            }
            j = 0;
            if (sentence[i] == '\0')
                break;
        }
    }
    printf("Longest word: %s\n", longest);
    return 0;
}