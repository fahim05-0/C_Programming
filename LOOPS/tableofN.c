#include<stdio.h>
int main(){
    int n,product=1;
    printf("Enter n ::");
    scanf("%d",&n);
    for (int i=1;i<=10;i++){
        product=n*i;
        printf("%d\n",product);
    }

return 0;    
}
