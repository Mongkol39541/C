#include "stdio.h"

struct informatin{
    char name[50];
    char nickname[20];
    char tel[20];
}   info;

int main(){
    printf("Input Data\n");
    printf("Name : ");
    scanf("%s",info.name);
    printf("NickName : ");
    scanf("%s",info.nickname);
    printf("Tel : ");
    scanf("%s",info.tel);
    printf("Display Data\n");
    printf("Name : %s\n",info.name);
    printf("NickName : %s\n",info.nickname);
    printf("Tel : %s",info.tel);
}