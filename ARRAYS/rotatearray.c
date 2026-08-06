#include<stdio.h>
void reverse(int arr[],int a,int b){
    
    int i=a;
    int j=b;
    
    while(i<j){
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--; 
    }
        
    return;
}

int main(){
    int n=7,k=3;
    // printf("enter starting index to be reversed:");
    // scanf ("%d",&a);
    // printf("enter ending index to be reversed:");
    // scanf ("%d",&b);
    int arr[7]={1,2,3,4,5,6,7};

    reverse(arr,0,n-1);

    return(arr,0,k-1);
    return(arr,k,n-1);

    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
        
    }
}