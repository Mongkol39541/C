#include <stdio.h>

int ans1,ans2;
char grade;

int main()
{
    printf("InputAns1 : ");
    scanf("%d",&ans1);
    ans2 = ans1/10;

    switch (ans2){
        case 9 : grade = 'A';
            break;
        case 8 : grade = 'B';
            break;
        case 7 : grade = 'C';
            break;
        case 6 : grade = 'D';
            break;
        default: grade = 'F';
    }
    printf("Grade is %c .",grade);
}