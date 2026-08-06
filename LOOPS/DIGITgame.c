#include<stdio.h>
int main(){
    
    printf("GUESS THE NUMBER GAME ");
    
    int n,i=1;
    int count =1,a =333;

    for ( i =1 ; i<=10 ; i++){
      
        printf  ("\nEnter guess no %d :",count);
        scanf("%d",&n);
        if(n==a){
            printf("\nRIght guess\n");
            printf(" \n\nright guess in %d attempts",i);
            break;
        count=count+n%10;
        }
         if (n<a){
            printf("\nGuess higher ");
            count++;
        }
         if (n>a){
            count++;
            printf("\nGuess lower");
        }
       
    }
    printf("GAME OVER ");
    
return 0;  
}