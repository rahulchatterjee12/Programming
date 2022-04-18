#include <stdio.h>

int main()
{
    int sal;
    int res1;
    int res2;
    int final_salary;
    printf("Enter your salary = ");
    scanf("%d",&sal);
    res1 = sal*40/100;
    res2 = res1*20/100;
    final_salary = res1 + res2;
    printf("%d",final_salary);

}