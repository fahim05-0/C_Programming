// Enter NUm of Rows :4
// Enter NUm of Columns :5
// 1 2 3 4 5
// 5 2 3 4 6 
// 5 6 8 9 2 
// 2 5 3 7 9 

#include<stdio.h>
int main(){

    int r,c,a;
    int s1

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
    
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}