
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
    int sum=0;
    for (int i=1;i<r;i++){
        for (int j=2;j<c;j++)
            sum=sum+arr[i][j];
        
    }
    printf("Sum of specific elements of matrix is %d\n",sum);;
    return 0;
}