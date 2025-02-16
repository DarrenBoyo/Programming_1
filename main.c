#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first, second, third;

    printf("Enter a 3 digit number:");
    scanf("%1d%1d%1d",&first,&second,&third);

    printf("The Reversal is: %1d%1d%1d", third,second,first);

    return 0;
}
