#include <stdio.h>
#include <math.h>

int main (){

    int ang;
    float sina, cosa,tana;
    printf("Enter the angle = ");
    scanf("%d",&ang);
    sina = sin(ang);
    cosa = cos(ang);
    tana = tan(ang);
    printf("SinA = %f \nCosA = %f \nTanA = %f",sina,cosa,tana);
}