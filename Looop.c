#include "stdio.h"

int i;
int j;
int k;
int main(){
    for(i=1;i<=5;i++){
        printf("Number %d\n",i);
    }

    j=1;
    while (j<=15){
        printf("Number : %d\n",j);
        j++;
    }

    k=1;
    do{
        printf("Number = %d\n",k);
        k++;
    }
    while(k<=15);
}