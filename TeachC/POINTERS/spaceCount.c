#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main (){
    int count=0;
    char * str= malloc(100*sizeof(char));

    printf("Enter the string :");
    scanf(" %99[^\n]",str);

    while(*str){
        if(*str == ' ')
            count++;
        str++;
    }

    printf("\n%d spaces in your string .",count);

    return 0;

}