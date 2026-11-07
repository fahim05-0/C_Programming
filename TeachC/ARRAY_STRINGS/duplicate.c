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
    
    for ( int j=0 ; j< n ;j ++){
        for ( int i=0 ; i< n-j; i++){
            if (*(arr +i )==*(arr +i+1)){
                printf("%d occured more than one time ", *(arr+i));
                break;
            }
        }
    }
    free(arr);
    return 0;
}

