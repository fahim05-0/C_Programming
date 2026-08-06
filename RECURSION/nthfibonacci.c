#include<stdio.h>
int fibo(int n){
    if (n==1||n==2) return 1;
    return (fibo(n-2)+fibo(n-1));
}
int main(){
    int n;
    printf("enter num of terms :");
    scanf("%d", &n);
    int r=fibo(n);
    printf("VALUE OF %d TH FIBONACCHI TERM IS :%d", n ,r);
    return 0;
}