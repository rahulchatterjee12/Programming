#include <stdio.h>
int main (){
    int C,D,v;
    scanf("%d%d",&C,&D);

    v = C + D;
    C = D;
    D = v - C;
    printf("The value of C is = %d and the value of D is = %d",C,D);
}