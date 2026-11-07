#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main (){
    int n;
    printf("ENTER THE NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    int *arr =malloc(n*sizeof(int));
    printf("ENter the elements of the array: ");

    for (int i=0 ;i<n; i++){
        scanf("%d",arr+i);
    }

    int max =INT_MIN;
    int min =INT_MAX;

    for (int i = 0 ; i<n ;i++){
        if (max < *(arr +i))
            max = *(arr+i);
        if ( min > *(arr+i))
            min= *(arr+i);
    }

    printf("\n%d is the max and %d is the minimum valued in the array", max , min );

    return 0;
}