#include<stdio.h>

void reverse(int arr[]){
    int i=0;
    int j=4;
    int ispalandromic=1;

    while(i<j){

        if(arr[i]!=arr[j]){

            ispalandromic=0;
            break;

        }

        if(arr[i]==arr[j])    

            ispalandromic=1;
    
        i++;
        j--; 
    }
    if(ispalandromic)   printf("PLANDROMIC\n");

    else printf("NOT PLANDROMMMIC\n");

    return;
}

int main(){

    int arr[5]={1,2,3,2,1};
    
    reverse(arr);

    return 0;
}