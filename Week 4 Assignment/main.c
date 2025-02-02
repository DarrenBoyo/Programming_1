#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a 2 Digit number:\n");
    scanf("%d",&n);

    printf("The reversal is:\n");
    printf("%d%d",n%10,n/10);

    return 0;
}
