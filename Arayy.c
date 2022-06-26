#include "stdio.h"

int main(){
    int x,i;
    float avg;
    printf("Number : ");
    scanf("%d",&x);
    int Num[x],sum;
    sum =0;
    for(i=0;i<=(x-1);i++){
        printf("Enter Number(%d) : ",i+1);
        scanf("%d",&Num[i]);
        sum = sum + Num[i];
    }
    printf("Sum : %d\n",sum);
    avg = sum/x;
    printf("Avg : %f",avg);
}