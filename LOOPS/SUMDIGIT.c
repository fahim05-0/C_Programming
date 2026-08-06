#include<stdio.h>
int main(){
    int n;
    printf("Enter n ::");
    scanf("%d",&n);

    int count =0;

    while (n!=0){
        
        count=count +n%10;
        n=n/10;
    }
    printf("  sum of DIGITS IN YOUR NUMBER IS ::%d",count);
return 0;  
}
