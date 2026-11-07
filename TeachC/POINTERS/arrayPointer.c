#include<stdio.h>
int main(){
    int * p, n;
    printf("Enter siz eof array :");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0 ; i<n ; i++){
        printf("\n enter numer %d :",1+i);
        scanf(" %d",&arr[i]);
    }
    p=arr;

     for (int i = 0 ; i<n ; i++){
        printf("%d\n",*(p+i));       // arr[i] = *(a+i)
    }

return 0;
}