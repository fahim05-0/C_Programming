#include<stdio.h>
int main(){

    char * str ="Pointer is fuck ";
    int i =0;

    while(*(str + i) != '\0'){
        printf("%c",*(str+i));
        i++;
    }

    return 0;
}