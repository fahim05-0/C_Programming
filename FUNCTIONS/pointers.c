#include<stdio.h>
int main(){
    int a=5,b=5; 
    int* x=&a;
    *x =10  ;
   
    printf("%p",x);  //%p FOR ADDRESS PRINTING
    printf("\n%p",&a);
    printf("\n%p",&x);
    printf("\n%p",*x);
    printf("%d",a);
    return 0;
}