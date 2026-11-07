#include<stdio.h>
#include<stdlib.h>

void mystrcpy (char *t , char * f){
    char* start=t;

    while(*f){
        *t=*f;
        f++;
        t++;
    }
    *t='\0';
    printf("%s",start);
    return;
 
}
int main (){
    printf("Enter your string :");
    char *p=malloc(80*sizeof(char));
    
    char *q =malloc(80*sizeof(char));

    scanf(" %79[^\n]",q);
    printf("Enter your string :");

    scanf(" %79[^\n]",p);
   
    mystrcpy(p,q);
    free(p);
    free(q);
    return 0;
}