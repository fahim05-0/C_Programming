// GIVEN MATRIX
// 1 2 3 
// 4 5 6 
// 7 8 9 


// WAVE PRINT
// 1 471
// 8 5 2 
// 3 6 9 
#include<stdio.h>
int main(){           //INPUT M1
    int r,c;
    printf("Enter NUm of Rows :");
    scanf("%d",&r);
    printf("Enter NUm of Columns :");
    scanf("%d",&c);
    

    int a[r][c];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++)
            scanf("%d", &a[i][j]);
    }
    printf("\nGIVEN MATRIX\n");
    
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

   

    printf("\n");
    
    printf("\nWAVE PRINT\n");
    
    for (int j=0 ; j<c ; j++){
       
            if(j%2!=0){
                
                 for (int i=r-1 ; i>= 0 ; i--){
                     printf("%d ",a[i][j]);
                 }
            }
            else{
                for (int i=0 ; i<r ; i++){
                    printf("%d ",a[i][j]);
                 }
                
                 
            }


        printf("\n");
    }

   
    return 0;
}