#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("FACTORS ARE :");
    if(n<=2) printf("INVALID NUMBER");
    int isPrime=1;

    for(int i=2 ; i<=n/2 ; i++){
        if(n%i==0){
           printf("%d ,",i);
           isPrime=0;
        }
    }

    if(isPrime) 
         printf("NO FACTORS AVAILABLE PRIME NUM");


    return 0;

}