#include<stdio.h>
int main(){
    char str []="College wallah";
    str[2]=65;
    int i=0;
    while(str[i]!=0){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}