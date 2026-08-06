#include<stdio.h>
int main(){           //INPUT M
    int m,n;
    printf("Enter NUm of Rows :");
    scanf("%d",&m);
    printf("Enter NUm of Columns :");
    scanf("%d",&n);
    

    int a[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    }
    printf("\nGIVEN MATRIX\n");
    
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    printf("\n");                   //spiral print 
    int minr=0;
    int maxr =m-1;
    int minc =0;
    int maxc =n-1;
    int tn=m*n;
    int count =0;

    while(count<tn){
        //PRINT MIN ROW
        for (int j= minc ; j<= maxc ; j++){
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        if(count>=tn) break;
        //PRINT MAX COLUMN
        for (int i=minr ; i<=maxr ; i++){
            printf("%d ",a[i][maxc]);
            count++;
        }
        maxc--;
         if(count>=tn) break;
        //PRINT MAX ROW
        for (int j=maxc ; j>=minc ; j--){
            printf("%d ",a[maxr][j]);
            count++;
        }
        maxr--;
         if(count>=tn) break;
        //PRINT MIN COLUMN
        for(int i = maxr ; i>=minr ; i--){
            printf("%d ",a[i][minc]);
            count++;
        }
        minc++;
         if(count>=tn) break;
    }
    return 0;
}