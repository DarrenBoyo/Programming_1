#include <stdio.h>
#include <stdlib.h>

int main()
{
    float speed;

    printf("Please Enter the wind Speed in Knots\n");
    scanf("%f",&speed);

    if(speed<1){
      printf("Calm");
    }
    else if (speed >=1 && speed <=3){
        printf("Light Air");
    }
    else if (speed>=4 && speed <=27){
        printf("Breeze");
    }
    else if (speed>=28 && speed <=47){
        printf("Gale");
    }
    else if (speed>=48 && speed <=63){
        printf("Storm");
    }
    else {
        printf("Hurricane");
    }
    return 0;
}
