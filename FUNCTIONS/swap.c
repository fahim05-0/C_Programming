#include<stdio.h>
int main(){
    int a,b;
    printf("enter num 1 :");
    scanf("%d",&a);
    printf("enter num 2 :");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Num 1 is now %d",a);
    printf("\nNum 2 is now %d",b);
    return 0;
}