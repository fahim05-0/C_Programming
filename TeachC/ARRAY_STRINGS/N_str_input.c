#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main (){

    char *bstr=malloc(1000*sizeof(char));
    char *str=malloc(10*sizeof(char));
    printf("IF done inputing enter quit\n");

    for( ; ;){

        printf("Enter a string :");
        gets(str);
        if(!strcmp(str , "quit"))
            break;

        strcat(str , "\n");

        if (sizeof(str) + sizeof(bstr)>= 1000)
            break;

        else
            strcat(bstr , str);
    }

    printf(bstr);

    return 0;
}
