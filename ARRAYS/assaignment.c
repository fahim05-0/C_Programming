#include <stdio.h>
void input(int arr[]){
    for( int i=0;i<5;i++){
        printf("Enter number of roll %d  ::",i+1);
        scanf("%d",&arr[i]);
    }
    return;
}


int main()
{
   int c1 [5],c2[5],c3[5],c4[5],c5[5], result[5] ;
   
   input(c1);
   printf("\n");
   input(c2);
   printf("\n");
   input(c3);
   printf("\n");
   input(c4);
   printf("\n");
   input(c5);
   printf("\n");
   
   int avg[5];
   for ( int i =0;i<5;i++){
       avg [i]=(c1[i]+c2 [i]+c3[i] +c4[i] +c5[i])/5;
      
   }
   for( int i=0;i<5;i++){
       printf ("%d \n",avg[i]);
   }
    return 0;
}
