// MIN  NUM IN THE ARRAAY
#include<stdio.h>
#include<limits.h>

int main(){
    int n,min;
    min=INT_MAX;
    printf("enter num of elements:");
    scanf("%d",&n);

    int arr [n];

    for(int i=0;i<n;i++){
        printf("\nenter element num %d :",i+1);
        scanf ("%d",& arr[i]);
        
        if(min>arr[i])
            min=arr[i];
    }
    
         printf("%d is smallest in your array",min);

    return 0;
}