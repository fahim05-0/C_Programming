#include<stdio.h>
int main(){
    int n;  // 1001
    int *p;  //2001
    int **q;
    // store 10 in n manually
    p=&n;  // 1001
    q=&p;  //2001
    **q =10;
    printf("%d\n",n);

    // // scan it
    // scanf("%d",*q);      // *q = (value at memory location 2001) which is address 1001 not ** needed
    // printf("\n%d",n);

    char *x ,** y, str[50];

    x=str;
    y=&x;
    printf("\nEnter string :");
    gets(*y);
    printf("\n%s",*y);

    return 0;
}