#include<stdio.h>
#include<stdbool.h>
int main(){
   int n;
   printf("\nENTER NUMBER OF ELEMENTS :");
   scanf("%d",&n);
   int arr[n];

   for( int i= 0 ; i<n ; i++) {
      printf("\nENTER NUM %d :",i+1);
      scanf("%d",&arr[i]);
   }

    for (int i=0; i<n; i++){
        bool flag = false; // ASSUMING THE NUMBER IS UNIQUE

        for (int j=0 ; j<n;j++){

           if( i!=j && arr[i]==arr[j]){
                flag = true;   //IF MATCHES THEN NUMBEWR HAS  DUPLICATE
                break;
           }
        }

        if(flag==false){
           printf("%d is unique in the array\n",arr[i]);
           }

        }
        return 0;
     }
     
    
