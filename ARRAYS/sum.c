#include<stdio.h>
int main(){
    int arr [5],sum=0;
    for(int i=0;i<5;i++){
         
        printf("\nenter element num %d :",i+1);
        scanf ("%d",& arr[i]);
        sum=sum+arr[i];
    
    }
    
         printf("%d is your sum",sum);
    return 0;
}