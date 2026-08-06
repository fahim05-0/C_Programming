#include<stdio.h>
void swap (int* x,int* y){

    int temp=*x;
    *x =*y;
    *y = temp;
    return;
}
int main(){
    int a,b;
    printf("enter num 1 :");
    scanf("%d",&a);
    printf("enter num 2 :");
    scanf("%d",&b);
    
    swap(&a,&b);
    printf("Num 1 is now %d",a);
    printf("\nNum 2 is now %d",b);
    return 0;
}