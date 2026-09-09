//Reverse an array without taking extra space.
#include <stdio.h>
int main()
{
    int arr[10],i,temp;
    printf ("Enter the elements in the array : ");
    for (i=0;i<10;i++)
    {
        scanf ("%d", &arr[i]);
    }
    for (i=0;i<5;i++)
    {
        temp = arr[i];
        arr[i] = arr[9-i];
        arr[9-i] = temp;
    }
    printf ("The reversed array is : ");
    for (i=0;i<10;i++)
    {
        printf ("%d", arr[i]);
    }
    return 0;
}