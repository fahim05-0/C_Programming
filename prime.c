#include<stdio.h>
int main(){
    int n,i,isprime=0;
    printf("enter your integer  :");
    scanf("%d",&n);
    
    
        for(i=2;i<n;i++){ 
            
            if(n%i==0){
            isprime=1;
            break;
            }
        }
        if(n==1||n<0)
            printf("invalid no");
        else if(isprime)
            printf(" not prime");
        else 
            printf ("prime");
        return 0;
        }
