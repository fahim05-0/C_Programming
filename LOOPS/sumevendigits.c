// SUM OF  even DIGITS IN YOUR NUMBER
#include<stdio.h>
int main(){
    int n;
    printf("Enter n ::");
    scanf("%d",&n);

    int count =0;

    while (n!=0){
        if((n%10)%2==0){
        count=count+n%10;
        }
        n=n/10;
    }
    printf(" SUM OF  even DIGITS IN YOUR NUMBER IS ::%d",count);
return 0;  
}