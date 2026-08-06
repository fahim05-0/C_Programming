// Enter n ::12345
// REVERSE OF DIGITS IN YOUR NUMBER FORM ::54321
#include<stdio.h>
int main(){
    int n;
    printf("Enter n ::");
    scanf("%d",&n);

    int r =0;

    while (n!=0){
        r=r+n%10;
        r=r*10;

        n=n/10;
    }
    printf("REVERSE OF DIGITS IN YOUR NUMBER FORM ::%d",r/10);
return 0;  
}