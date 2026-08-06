// MAX NUM IN THE ARRAAY   (WITH ONE LOOP POSSIBLE USING LIMITS.H)
#include<stdio.h>
#include<limits.h>

int main(){
    int n,max;
    printf("enter num of elements:");
    scanf("%d",&n);
    int arr [n];
    max=INT_MIN;
    for(int i=0;i<n;i++){
        printf("\nenter element num %d :",i+1);
        scanf ("%d",& arr[i]);

        if(max<arr[i])
            max=arr[i];
    }
     
    // for(int i=0 ; i< n ; i++){
      
    //     if(max<arr[i])
    //         max=arr[i];
    // }

     printf("%d is largest in your array",max);

     return 0;
}