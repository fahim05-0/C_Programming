#include<stdio.h>
#include<string.h>
int main(){
    char str []="Fahim coder";
    char* ptr=str;
    printf("%p",ptr);
    printf("\n%p",&str[1]);
    printf("\n%p",str);
   
    return 0;

}