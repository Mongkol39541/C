#include <stdio.h>

int ans1,ans2;
int x;
int main()
{
    printf("InputX : ");
    scanf("%d",&x);
    printf("Input1 : ");
    scanf("%d",&ans1);
    printf("Input2 : ");
    scanf("%d",&ans2);

    if(x == 1){
        printf("+ = %d",ans1+ans2);
    }
    else if(x == 2){
        printf("- = %d",ans1-ans2);
    }
    else if(x == 3){
        printf("* = %d",ans1*ans2);
    }
    else if(x == 4){
        printf("/ = %d",ans1/ans2);
    }
    else{
        printf("Error!");
    }
}