#include "stdio.h"

int main(){
    int *a;
    int b;
    b = 100;
    a = &b;
    printf("Address A : %d\n",a);
    printf("Value A : %d\n",*a);
    printf("Value B : %d\n",b);
}