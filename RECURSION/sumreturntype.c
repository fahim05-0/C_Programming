#include<stdio.h>
int sum (int n){ 
    if (n==1) return 1;

    return (n+sum(n-1));
}

int main(){
    int n;
    printf("enter num :");
    scanf("%d",&n);
    int s=sum(n);
    printf("SUM OF 1 to %d is :%d",n,s);
    return 0;
}