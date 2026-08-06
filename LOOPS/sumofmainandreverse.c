// NEW NUMBER FROM SUM OF YOUR DIGITS IN GIVEN AND REVERSED NUMBER
#include<stdio.h>
int main(){
    int ni,n;
    printf("Enter n ::");
    scanf("%d",&n);
    ni=n;
    int r =0;

    while (n!=0){
        r=r+n%10;
        r=r*10;
        n=n/10;
    }
    printf(" NEW NUMBER FROM SUM OF YOUR DIGITS IN GIVEN AND REVERSED NUMBER::%d",(r/10)+ni);
return 0;  
}