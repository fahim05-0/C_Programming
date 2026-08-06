
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
    int a,b;
    printf("enter starting index to be reversed:");
    scanf ("%d",&a);
    printf("enter ending index to be reversed:");
    scanf ("%d",&b);
    int arr[5]={1,2,3,4,5};
    reverse(arr,a,b);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
        
    }
}