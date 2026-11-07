#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void mystrcat (char *p , char * q){
    char* start=p;

    while(*p){
        p++;
    }
    *p=' ';
    p++;
    
    while(*q){
        *(p)=*q;
        q++;
        p++;
    }
    *p='\0';
    printf("%s",start);
    return;

}
int main (){ 
    char *p=malloc(80*sizeof(char));
    char *q =malloc(80*sizeof(char));

    printf("Enter your string  1:");
    scanf(" %79[^\n]",q);
   
    printf("\nEnter your string  2:");
    scanf(" %79[^\n]",p);

    mystrcat(p,q);

    free(p);
    free(q);
    return 0;
}