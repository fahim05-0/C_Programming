#include<stdio.h>
int prlog (int a, int b){
    if (b==0)return 1;
    int x=prlog(a,b/2);
    if(b%2==0)
    return x*x;
    else
    return a*x*x;
}   
int main(){

int a,b;
    printf("enter num 1 :");
    scanf("%d", &a);
    printf("enter num 2 :");
    scanf("%d", &b);

    int out=prlog(a,b); 

    printf(" %d to the power %d is :%d", a , b , out);

    return 0;
}