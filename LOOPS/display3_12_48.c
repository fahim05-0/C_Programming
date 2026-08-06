// 3 ,12 ,48 ,192 ,768 ,
#include<stdio.h>
int main(){
    int n,product=3;
    printf("Enter n ::");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        
        printf("%d ,",product);
        product=product*4;
    }

return 0;  
}