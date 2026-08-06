//IS THERE ANY ELEMENT MULTIPLE TIMES ?
#include <stdio.h>
int main (){
    int arr[7]={1,2,3,4,2,4,7};
    
    int element , check=0;
    for (int i=0; i<7; i++){
        for (int j=i+1 ; j<7 ;j++){
           if( arr[i]==arr[j]){
             printf("%d is more than one time in array\n",arr[i]);
           }

        }
     }
     
    return 0;
    
    }

