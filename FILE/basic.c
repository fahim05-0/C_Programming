#include<stdio.h>
int main(){
    FILE *ptr;
    // file opening
    ptr = fopen("fahim.txt","r");

    char str[100];
    // fscanf(ptr,"%s",str); // only one word will be read
    fgets(str,100,ptr); // whole line will be read
    
    printf("%s",str);  // printing the whole line only not the whole file

    // if(ptr==NULL){
    //     printf("File does not exist\n");
    // }
    // else{
    //     printf("File opened successfully\n");
    // }
    FILE *ptr1;
    // file creation
    ptr1 = fopen("handling.txt","w");

   // fprintf(ptr1,"he he he "); // overwriting the file
   // fputs(" fahim",ptr1); // overwriting the file

    ptr1 = fopen("handling.txt","a"); // appending the file
    fputs("\n hhi",ptr1); // appending the file






    return 0;
}