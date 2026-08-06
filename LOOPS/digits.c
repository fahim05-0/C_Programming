
// DIGITS IN YOUR NUMBER 
#include<stdio.h>
int main(){
    int n;
    printf("Enter n ::");
    scanf("%d",&n);

    int count =0;

    while (n!=0){
        n=n/10;
        count++;
    }
    printf(" DIGITS IN YOUR NUMBER IS ::%d",count);
return 0;  
}