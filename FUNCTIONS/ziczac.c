// 111
// 2 1 1 1 2 1 1 1 2 
// 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3 
// 4 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3 4 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3 4 
#include<stdio.h>
void ziczac(int n){
    if (n==0) return ;
    printf("%d ",n);
    ziczac(n-1);
    printf("%d ",n);
    ziczac(n-1);
    printf("%d ",n);
    
    return ;
}
int main(){
    int n;
    printf("enter n :");
    scanf("%d", &n);
    ziczac(n);
    
    return 0;
}