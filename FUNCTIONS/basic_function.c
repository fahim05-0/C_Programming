#include<stdio.h>
int add (int a,int b){
     return a+b;
}

int main(){ 
    int a,b;
    printf("Enter first  number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    
    

   int sum = add (a,b);
   printf("Your sum is :%d",sum);







    return 0;
}