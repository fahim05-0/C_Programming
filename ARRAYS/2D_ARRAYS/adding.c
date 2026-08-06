// 5 5 
// 5 5     without extra arraay
#include<stdio.h>
int main(){
    int r=2,c=2;
    int arr[2][2]={1,2,3,4}; 
    int brr[2][2]={4,3,2,1};
    
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            arr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}