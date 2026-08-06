// Enter NUm of Rows :2
// Enter NUm of Columns :3
// 1 2 3
// 4 5 6 

// 1 4 
// 2 5 
// 3 6 
#include<stdio.h>
int main(){

    int r,c;
    printf("Enter NUm of Rows :");
    scanf("%d",&r);
    printf("Enter NUm of Columns :");
    scanf("%d",&c);
    

    int arr[r][c];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++)
            scanf("%d", &arr[i][j]);
    }
    printf("\n");
    
    for (int i=0;i<c;i++){
        for (int j=0;j<r;j++)
            printf("%d ",arr[j][i]);
        printf("\n");
    }
   
    return 0;
}