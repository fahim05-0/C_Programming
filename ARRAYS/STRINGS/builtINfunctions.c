#include<stdio.h>
#include<string.h>
int main(){
    char s1[12]="Fahim ";
    char s2 [12]="shafin";
    strcat(s1,s2);
    printf("%s\n",s1);

    // strcpy(s2,s1);

    // puts(s1);
    // puts(s2);

    int x = strlen(s2);

    

    
    printf("%d",x);
    return 0;
}