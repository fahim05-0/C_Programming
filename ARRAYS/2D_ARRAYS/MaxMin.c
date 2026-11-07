// 1 2 -3 
// 4 5 5 
// 9 4 -7 
// Maximum valu is 9 in index (2 , 0)
// Minimum valu is -7 in index (2 , 2)
#include<stdio.h>

int main(){

    int r,c,max=0,min=0;
    int arr[3][3]={1,2,-3,4,5,5,9,4,-7};

    for (int i=0;i<3;i++){

        for (int j=0;j<3;j++)

            printf("%d ",arr[i][j]);

        printf("\n");
    }

    for (int i=0;i<3;i++){

        for (int j=0;j<3;j++){ 
            
            if(arr[i][j]>max){
            max=arr[i][j];
            r=i;
            c=j;
            }
        }
    }

    printf("Maximum valu is %d in index (%d , %d)\n",max,r,c);

    for (int i=0;i<3;i++){

        for (int j=0;j<3;j++){
           
            if(arr[i][j]<min){
            min=arr[i][j];
            r=i;
            c=j;
            }
        }

    }

    printf("Minimum valu is %d in index (%d , %d)",min,r,c);

    return 0;
} 