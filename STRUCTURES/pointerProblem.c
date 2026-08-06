#include<stdio.h>
typedef int* pointer;
int main (){
    int x=5,y=6;
    //int* x ,y;   // int* x and int y not both pointers 
    pointer a=&x ,b=&y;
    printf("%p \n%p",a,b);
    return 0;
}