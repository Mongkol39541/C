#include "stdio.h"

int A_text(int,int,int);

int main(){
    int a,b,c;
    printf("Number : ");
    scanf("%d",&a);
    printf("Number : ");
    scanf("%d",&b);
    printf("Number : ");
    scanf("%d",&c);
    printf("High : %d",A_text(a,b,c));
}

int A_text(int x,int y,int z){
    int max = x;
    if(y>max){
        max = y;
    }
    if(z>max){
        max = z;
    }
    return max;
}