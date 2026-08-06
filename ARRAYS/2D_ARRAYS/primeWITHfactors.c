#include<stdio.h>
int main(){
    int n ,arr[50],j=0;
    printf(" ENTER YOUR NUMBER ");
    scanf("%d",&n);
    int isprime =1;
    
    for (int i=2 ;i<n/2 ;i++){
        if (n%i == 0){
            isprime=0;
            arr[j]=i;
            j++;
        }
    }

    if (isprime)
        printf("PRime number\n");

    else {
        printf("Not Prime\n");
        printf("Factors are \n");
    }

    for (int k =0 ; k<j ;k++){
       
        printf("%d , ",arr[k]);
    }
    // printf("\xA0 ,\xA1 ,\xA2 ");    SPECIAL CHARACTES
    return 0;
}