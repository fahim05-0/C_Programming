#include<stdio.h>
void reasing (int n){
    if (n==0) return  ;
    
    printf("%d\n",n);
    reasing(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("enter num  :");
    scanf("%d",&n);
    reasing(n);
    return 0;
}