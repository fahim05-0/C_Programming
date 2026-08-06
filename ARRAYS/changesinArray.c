//EVEN INDEX DOUBLE ODD INIDEX +10
#include<stdio.h>
int main(){
    int n,max;
    printf("enter num of elements:");
    scanf("%d",&n);
    int arr [n];
    for(int i=0;i<n;i++){
        printf("enter element num %d :\n",i+1);
        scanf ("%d",& arr[i]);
        
        if(i%2==0)
            arr[i]=arr[i]+10;
        else 
            arr[i]=2*arr[i];
    
    }
    for(int i=0;i<n;i++)
         printf("%d ",arr[i]);
    return 0;
}