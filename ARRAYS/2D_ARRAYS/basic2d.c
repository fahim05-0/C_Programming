// 1 2
// 3 4
#include<stdio.h>
int main(){
    int r=2,c=2;
    int arr[2][2]={{1,2},{3,4}};
    
    

    // or arr [0][0]=1;
    //    arr [0][1]=2;
    //      ........
    // or arr[2][2]={1,2,3,4};
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}