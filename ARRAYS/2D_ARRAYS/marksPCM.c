#include<stdio.h>
int main(){

    int r,c;
    printf("Enter NUm of students :");
    scanf("%d",&r);
    printf("Enter NUm of Courses :");
    scanf("%d",&c);

    int arr[r][c];  
    for (int i=0;i<r;i++){ 
        printf("Enter marks of Roll %d  for %d courses :\n",i,c);
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