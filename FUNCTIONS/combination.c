#include<stdio.h>
int Fact(int n){
    int  fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
   }
   return fact;
}
int main(){
    int n,r;
    printf("Input n :");
    scanf("%d",&n);
    printf("Input r :");
    scanf("%d",&r);
    int fact1=Fact(n);
    int fact2=Fact(r);
    int fact3=Fact(n-r);
    long combination=fact1/(fact2*fact3);
    printf("COMBINATION VALUE ::%d",combination);
    return 0;

}