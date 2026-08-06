#include<stdio.h>
int main(){

    printf("\nFOR FIRST MATRIX\n") ;           //INPUT M1
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

    printf("\nFOR SECOND MATRIX\n");              //INPPUT M2
    int R,C;
    printf("Enter NUm of Rows :");
    scanf("%d",&R);
    printf("Enter NUm of Columns :");
    scanf("%d",&C);
    

    int b[R][C];
    for (int i=0;i<R;i++){ 
        for (int j=0;j<C;j++)
            scanf("%d", &b[i][j]);
    }

    printf("\n");
    if(c!=R){
         printf("\nmultiplication not possible dimension error\n");  
        }
        
    else{    
    int res[r][C]; 
    int cR=R;                     //resltant matrix

    for (int i=0 ; i<r ;i++){
        
        for (int j=0 ; j<C ; j++){    
            /*i row of a[][] * j column of b[][]
            (a[i][0] a[i][1]....a[i][j]) * (b[0][j] b[1][j] ....b[i][j])*/ 

            res [i][j]=0;

            for (int k=0 ; k<cR ;k++){
                res[i][j]+= a[i][k]*b[k][j];

            }

        }
        
    }                         
    
    printf("\nPRODUCT OF THE GIVEN MATRIX IS \n");
    
    for (int i=0;i<r;i++){
        for (int j=0;j<C;j++)
            printf("%d ",res[i][j]);
        printf("\n");
    }
}
   
    return 0;
}