//INDEX OF  MARKS BELOW X=35 IN THE ARRAY
#include<stdio.h>
int main(){
    int marks [10];

    for(int i=0;i<10;i++){
        printf("\nenter element num %d :",i+1);
        scanf ("%d",& marks[i]);
    }

    printf("\nMARKS BELOW 35 IN THE ARRAY HAS INDEX :\n");

    for (int i=0;i<10;i++){
         if (marks[i]<35)
         printf("%d ",i);
    }

    return 0;
}