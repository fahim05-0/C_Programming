#include <stdio.h>

int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int count=0,n=8,x=12;

    for( int i = 0; i<n;i++){

      for (int j=i+1;j<n;j++){

          for ( int z = j+1;z<n;z++){

             if(arr[i]+arr[j]+ arr[z]==x){
             count++;
             
             }
              
          }
          
      }
      
  }
  
    printf("%d",count);

    return 0;
}
