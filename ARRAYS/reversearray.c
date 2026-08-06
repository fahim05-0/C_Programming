//REVERSE THE ARRAY WITHOUT USING EXTRA ARRRAY AND WITH BY COMNT 
#include<stdio.h>

void reverse(int arr[]){
    int i=0;
    int j=4;

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
    int arr[5]={1,2,3,4,5};
    // int rrr[5];

    // for(int i=0;i<5;i++){
    //     rrr[4-i]=arr[i];

    // }
    reverse(arr);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
        
    }
}