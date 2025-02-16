#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter the number of numbers: ");
    scanf("%d", &n);

    float numbers[n-1];
    int i=0;
    while(i<n){
    printf("Enter a number: ");
    scanf("%f",&numbers[i]);
    i++;
    }

    float max=numbers[0];
    i=0;
    while(i<n){
        if(max<numbers[i]){
            max = numbers[i];
        }
        i++;
    }
    printf("The Largest Number entered was:%.4f",max);

    return 0;
}
