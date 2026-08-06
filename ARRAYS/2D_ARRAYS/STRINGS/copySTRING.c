#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="Fahim";
    char* s2 =s1;

    s1[0]='S';
    printf("%s",s2);
    return 0;
}