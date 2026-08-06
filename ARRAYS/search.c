#include <stdio.h>
int main (){
    int arr[7]={1,2,3,4,5,4,7};
    int x=4;
    for (int i=6; i>=0 ;i--){
        if(arr[i]==x){
            printf("%d Is PRESENT IN THE ARRAY \nthe last index is %d",x,i);
            break;
        }
     }
    
    }







