#include<stdio.h>
int main() {
    int a ;
    int b;
    char c;
    scanf("%d %d %c",&a,&b,&c);

    switch(c) {
        case '+':
            printf("%d\n",a+b);
            break;
        case '-':
            printf("%d\n",a-b);
            break;
        case '*':
            printf("%d\n",a*b);
            break;
        case '/':
            if(b!=0)
                printf("%f\n",(float)a/b);
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }

   
    return 0;
}