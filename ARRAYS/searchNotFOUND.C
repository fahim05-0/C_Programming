#include <stdio.h>
int main (){
    int arr[7]={1,2,3,4,5,4,7};
    int x=10;
    int check=0;
    for (int i=6; i>=0 ;i--){
        if(arr[i]!=x){
            check=1;
            break;
        }
     }
     if(check)
       printf("%d Is  not PRESENT IN THE ARRAY ",x);
    
    }

