#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter a 3 digit number:");
    scanf("%d",&num);

    int third = num%10;
    int second = (num/10)%10;
    int first = num/100;
    printf("The Reversal is: %d%d%d", third,second,first);

    return 0;
}
