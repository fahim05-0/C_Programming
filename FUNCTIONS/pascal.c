#include<stdio.h>
int Fact(int n){
    int  fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
   }
   return fact;
}
int nCr(int n,int r){
    long combination=Fact(n)/(Fact(r)*Fact(n-r));
    return combination;
}

int main(){
    int n;
    printf("Input n :");
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int pt=nCr(i,j);
            printf("%d ",pt);
        }
        printf("\n");
    }
    return 0;
}