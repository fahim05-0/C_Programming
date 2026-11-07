#include<stdio.h>
int main (){
    char q[100];
    printf("Enter a string :");
    gets(q);
     char  *p=q;
    while(*p && *p !=' '){
        p++;
    }
    printf(p);
    return 0;
}
