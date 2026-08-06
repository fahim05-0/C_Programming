//1-2+3-4+5-6............(sum of this)
#include<stdio.h>
int main(){
    int n;
    printf("Enter n ::");
    scanf("%d",&n);

    int sum=0;

    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum=sum-i;
        }else{ 
            sum=sum+i;
        }
    }
    printf("YOUR SUM IS::%d",sum);
return 0;  
}