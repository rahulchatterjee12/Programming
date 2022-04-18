#include <stdio.h>
int main()
{
    int a, b,c,max;
    printf("Enter 3 numbers= \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
        max = a;
    else
        max = b;

    if (max>c)
        printf("The greater number is = %d",max);
    else
        printf("The greater number is = %d",c);
    return 0;
}