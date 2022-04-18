#include <stdio.h>

int main (){
    int cost , sellp,value;
    printf("Enter the Cost and selling price of the item = \n");
    scanf("%d%d",&cost,&sellp);
    if (cost>sellp){
        value = cost - sellp;
        printf("It will be loss for you. It will cost you Rs.%d",value);
    }
    else{
        value = sellp - cost;
        printf("It will be profitable for you.You will made Rs.%d",value);
    }
}