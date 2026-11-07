#include<stdio.h>
#include<string.h>
int main(){
    char str [100];
    
    printf(" INSERT YOUR WORDS :");
    gets(str);

    //scanf("%s",str);       // only the first word will be considered 

    int i=0;
    // while(str[i]!=0){
    //     printf("%c",str[i]);
    //     i++;
    // }       OR
    
    // printf("%s",str);
    
//         OR
    puts(str);
}