#include<stdio.h>
#include<string.h>
int main (){
    char *p ="fahim";
    char str [50];
    
    do{
        printf("Enter a string :");
        scanf("%s",&str);
      } while(strcmp(p, str));

    printf("\nRight guess");  

    return 0;
    }
