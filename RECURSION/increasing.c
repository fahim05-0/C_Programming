#include<stdio.h>
void show (int x,int n){
    if (x>n) return  ;
    
    
    printf("%d\n",x);
     show(x+1,n);
     return;
}
int main(){
    int n;
    printf("enter num  :");
    scanf("%d",&n);
    
    show(1,n);
    return 0;
}
