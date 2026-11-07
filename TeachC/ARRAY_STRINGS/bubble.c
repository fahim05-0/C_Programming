#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main (){
    int n;
    printf("ENTER THE NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    int *arr =malloc(n*sizeof(int));
    printf("ENter the elements of the array: ");

    for (int i=0 ;i<n; i++){
        scanf("%d",arr+i);
    }

    for ( int i = 0 ; i <n ;i++){
        bool flag = true;
        for ( int j = 0 ; j<n-i-1 ; j++){
            int temp ;
            if (*(arr+j) > *(arr + j+1)){
                temp = *(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr +j+1)= temp;
                flag = false;
            }      
        }
         if(flag)
                break;
    }
    printf("\nSORTED ARRAY \n");
    for( int i =0 ; i< n ; i++){
        printf("%d ",*(arr+i));
    }
    free(arr);
    return 0;
}
