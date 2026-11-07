#include<stdio.h>
int main (){

    int arr [3][3][3];
    int sum =0;
    int x=1;

    for ( int i =0 ;  i < 3 ; i++ ){
        for (int j =0 ; j< 3 ; j++){
            for (int k = 0; k<3 ; k++){
                arr[i][j][k]=x;
                x++;
            }
        }
    }

     for ( int i =0 ;  i < 3 ; i++ ){
        for (int j =0 ; j< 3 ; j++){
            for (int k = 0; k<3 ; k++){
               
                printf("%d  ",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    for ( int i =0 ;  i < 3 ; i++ ){
        for (int j =0 ; j< 3 ; j++){
            for (int k = 0; k<3 ; k++){
            sum= sum +  arr[i][j][k];
            }
        }
    }

    printf("\n%d is the sum of the elements ", sum );

    return 0;


}