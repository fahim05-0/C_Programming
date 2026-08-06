#include<stdio.h>
int min(int a,int b){
    if(a<b)
        return a;
    else
        return b; 

}
int gcd(int a,int b){
    int hcf; 
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    return hcf;
}


int main(){
int a,b;
    printf("enter num 1 :");
    scanf("%d", &a);
    printf("enter num 2 :");
    scanf("%d", &b);

    int hcf =gcd(a,b); 

    printf("GCD of %d & %d is :%d", a , b , hcf);

    return 0;
}