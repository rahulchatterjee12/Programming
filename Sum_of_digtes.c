#include <stdio.h>

int main (){
    int num ,n1,n2,n3,n4,n5,the_sum;
    scanf("%d",&num);
    n1 = num/10000;
    n2 = num/1000 - (n1*10);
    n3 = num/100 -(n1*100 + n2*10);
    n4 = num/10 - (n1*1000 + n2*100 + n3*10);
    n5 = num - (n1*10000 + n2*1000 + n3*100 + n4*10);
    the_sum = n1+n2+n3+n4+n5;
    printf("The sum of 5 dig is = %d \n",the_sum);
    printf("The reverse number is = %d%d%d%d%d",n5,n4,n3,n2,n1);
    return 0;
}