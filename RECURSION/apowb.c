#include<stdio.h>
int pr (int a, int b){
    if (b==0)return 1;
    if(b<0) return 1/a*pr(a,b-1);
    return (a*pr(a,b-1));
}   

int main()

{int a,b;
    printf("enter num 1 :");
    scanf("%d", &a);
    printf("enter num 2 :");
    scanf("%d", &b);

    int out=pr(a,b); 

    printf(" %d to the power %d is :%d", a , b , out);

    return 0;
}