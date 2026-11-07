#include<stdio.h>
int main(){
    int  *p ,x;
    p=&x;
    *p =15;
    printf("%p",p);
   
    
    printf("\n%p",p+1);  // address + value = address

    printf("\n%d",*p);
    (*p)++;              // bracet for incrementing value at memory address p

    printf("\n%d",*p);

    return 0;
}