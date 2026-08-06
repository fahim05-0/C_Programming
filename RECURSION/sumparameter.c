#include<stdio.h>
void sum (int n,int s){
    if (0==n){
        printf("your sum is :%d",s);

    return  ;
    }
    
   
     sum(n-1,n+s);
     return;
}

int main(){
    int n;
    printf("enter num  :");
    scanf("%d",&n);
    
    sum(n,0);
    return 0;
}
