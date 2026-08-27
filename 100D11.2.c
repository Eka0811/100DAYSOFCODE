//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    int cp,sp,p,l,pp,lp;
    printf ("Enter the cost price and the selling price of the item :");
    scanf ("%d %d", &cp , &sp);
    if (sp > cp)
    {
        p = sp - cp;
        pp = p/cp * 100;
        printf ("Profit of the item is %d\n" , p);
        printf ("Profit percentage is %d\n", pp);
    }
    else if (cp > sp)
    {
        l = cp - sp;
        lp = l/cp * 100;
        printf ("Loss of the item is %d\n", l);
        printf ("Loss Percentage is %d\n", lp);
    }
    else
    {
        printf ("Its neither profit nor loss.");
    }
    return 0;
}