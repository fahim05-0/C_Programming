#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){

    char *str =malloc(100*sizeof(char));
    char *ptr =malloc(100*sizeof(char));
    printf("Enter the string : ");

    scanf(" %99[^\n]", str);
    int z=strlen(str);

    for (int i=0 ;i<z; i++){
        *(ptr+i)=*(str + z-i-1);
    }
    *(ptr + z)='\0';

    printf("%s",ptr);
    free(str);
    free(ptr);
    return 0;
}

