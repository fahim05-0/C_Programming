#include <stdio.h>
#include <string.h>

int main() {
    char *s[3]={"yes", "no" ,"maybe"};
    char str[100];

    printf("ASK A QUESTION :");

    scanf("%s",&str);

    puts(s[strlen(str)%3]);
    

    
    return 0;
}