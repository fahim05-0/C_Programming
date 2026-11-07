#include<stdio.h>
#include<stdlib.h>

void mystrlen (char *p){
    int count =0;
    while(*p){
        count++;
        p++;
    }
    printf("%d is your string length",count);
    return;

}
int main (){
    printf("Enter your string :");
    char *p =malloc(80*sizeof(char));
    scanf("%79[^\n]",p);

    mystrlen(p);
    free(p);
    return 0;
}