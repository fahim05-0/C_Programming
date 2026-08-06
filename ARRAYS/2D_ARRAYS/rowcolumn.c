#include<stdio.h>
int main(){
    int r=2,c=2;
    int arr[][2]={1,2,3,4};   // automatically r =2 
    
    

    
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}