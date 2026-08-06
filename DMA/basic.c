#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("ENTER NUMBER OF N :");
    scanf("%d",&n);

    int* ptr = malloc(n*sizeof(int));

    for(int i=0 ; i<n ; i++){
        scanf("%d",ptr + i);
    }
    for(int i=0 ; i<n ; i++){
        printf("\n%d", ptr[i]);
    }
    return 0;
    free(ptr);

}