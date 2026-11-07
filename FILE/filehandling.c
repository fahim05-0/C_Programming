#include<stdio.h>
int main() {
    FILE *ptr;
    ptr = fopen("fahim.txt","r");
    char str[100];
    while(fgets(str,100,ptr)!=NULL) {
        printf("%s",str);
    }


    // file creation
    FILE *ptr1;
    ptr1 = fopen("shafin.txt","w");
    char str1[100]="HI I AM SHAFIN \nBest friend of fahim";
    fputs(str1,ptr1);
    fclose(ptr1);
    

    return 0;
}
