//Search for an element in an array using linear search.
#include <stdio.h>
int main()
{
    int search, i, arr[10], found=0;
    printf ("Enter the elements in the array : ");
    for (i=0;i<10;i++)
    {
        scanf ("%d", &arr[i]);
    }
    printf ("Enter the number to be searched : ");
    scanf ("%d", search);
    for (i=0;i<10;i++)
    {
        if (arr[i]==search)
        {
            found=1;
            break;
        }
    }
    if (found==1)
    {
        printf ("The number %d is present in the array \n", search);
    }
    else
    {
        printf ("The number %d is not present in the array \n", search);
    }
    return 0;
}