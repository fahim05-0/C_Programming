#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>

int main(){
    int n;
    printf("ENTER THE NUMBER OF ELEMENTS: ");
    scanf("%d",&n);
    int *arr = malloc(n*sizeof(int));
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
        scanf("%d",arr+i);

    int *count = malloc(n*sizeof(int));
    for(int i=0;i<n;i++) count[i]=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(arr[i]==arr[j])
                count[i]++;
    }

    int max = INT_MIN, idx = 0;
    for(int i=0;i<n;i++){
        if(count[i] > max){
            max = count[i];
            idx = i;
        }
    }

    printf("\n%d is the mode\n", arr[idx]);
    free(arr);
    free(count);
    return 0;
}