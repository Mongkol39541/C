#include "stdio.h"

char main(){
    FILE *fl;
    char text[200];
    if((fl = fopen("C:\\Users\\bossv\\Desktop\\myfile123.txt","r")) == NULL){
        printf("Can not open!!");
    }
    while(!feof(fl)){
        if(fgets(text,200,fl)){
            printf("%s",text);
        }
    }

    fclose(fl);
}