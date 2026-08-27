//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.
#include <stdio.h>
int main()
{
    int perc;
    printf ("Enter the percentage of a student : ");
    scanf ("%d", &perc);
    if (perc>=90 && perc<=100)
    {
        printf ("The student has Grade A.");
    }
    else if (perc>=80 && perc<=89)
    {
        printf ("The student has Grade B.");
    }
    else if (perc>=70 && perc<=79)
    {
        printf ("The student has Grade C.");
    }
    else if (perc>=60 && perc<=69)
    {
        printf ("The student has Grade D.");
    }
    else if (perc<=60)
    {
        printf ("The student has Grade F.");
    }
    else 
    {
        printf ("The student was absent, the student failed");
    }
    return 0;
}