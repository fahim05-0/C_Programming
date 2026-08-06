// is thr specific num is in the array if so print its last index
#include <stdio.h>
#include<stdbool.h>
int main (){
    int arr[7]={1,2,3,4,5,4,7};
    int x=4, idx ;
    bool flag= false;
    for (int i=6; i>=0 ;i--){
        if(arr[i]!=x){
            flag=true;
            idx=i;
            break;
        }
     }
     if(flag)
       printf("%d Is  not PRESENT IN THE ARRAY\n LAST INDEX IS %d ",x,idx);
     else
        printf("%d Is PRESENT IN THE ARRAY ",x);

    }

