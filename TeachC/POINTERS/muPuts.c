#include<stdio.h>
#include<stdlib.h>

void myputs (char *p){

    while(*p){

        printf("%c",*p);
        p++;
    }
   
    return;

}
int main (){

    char *p =malloc(80*sizeof(char));

    printf("Enter your string :");
    scanf("%79[^\n]",p);

    myputs(p);

    free(p);
    
    return 0;
}