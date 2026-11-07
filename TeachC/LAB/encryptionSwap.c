#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc , char* argv[]){

    if (argc <3 )
        return 1;

    FILE* src =fopen(argv[1] , "r");
    FILE* dest =fopen(argv[2],"w");

    if(src == NULL || dest == NULL)
        return 1;

    int c1 ,c2;

    while((c1=fgetc(src)) !=EOF ){

        c2=fgetc(src);

        if (c2==EOF){

            fputc(c1 , dest);
            break;
        }

        fputc(c2 , dest);
        fputc(c1 , dest);

    }

    fclose(src);
    fclose(dest);

    return 0;

}