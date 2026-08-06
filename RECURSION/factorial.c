
#include<stdio.h>

int factorial(int n){ 
    if (n==1||n==0) return 1;

    return (n*factorial(n-1));
}

int main(){
    int n;
    printf("enter num :");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("FACTORIAL OF %d is :%d",n,fact);
    return 0;
}

