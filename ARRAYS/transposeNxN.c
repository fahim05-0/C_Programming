#include<stdio.h>
int main(){

    int n;
    printf("Enter NUm:");
    scanf("%d",&n);
                   
    int arr[n][n];                   //INPUT
    for (int i =0;i<n;i++){
        for (int j=0;j<n;j++)
            scanf("%d", &arr[i][j]);
    }
     printf("\nGIVEN MATRIX\n");     //GIVEN PRINT
    for (int i =0;i<n;i++){
        for (int j=0;j<n;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    printf("\n");                    //TRANSPOSE
    for ( int i=0;i<n;i++){
        for ( int j=i+1;j<n;j++){   // OR J=0 ;J<i 
            int temp;
        
           temp =arr[i][j];
          arr[i][j]=arr[j][i];

          arr[j][i]=temp;
    }
}
 printf("\nTRANSPOSE\n");            // TRANSPOSE PRINT 
    for (int i =0;i<n;i++){
        for (int j=0;j<n;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
   
    return 0;
}