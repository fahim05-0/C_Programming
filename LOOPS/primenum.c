#include<stdio.h>
int main(){
    int n,i,NOTprime=0;
    printf("enter your integer  :");
    scanf("%d",&n);

        for(i=2;i<n/2;i++){ 
            if(n%i==0){
            NOTprime=1;
            break;
            }
        }

        if(n==1||n<0)
            printf("invalid no");

        else if(NOTprime)
            printf("not prime");

        else 
            printf ("prime");
        return 0;
        }
