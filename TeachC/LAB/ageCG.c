#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("titanic.csv", "r");
    FILE *out = fopen("titanic_new.csv", "w");

    if (fp == NULL)
    {
        printf("Could not open titanic.csv\n");
        return 1;
    }

    if (out == NULL)
    {
        printf("Could not create output file\n");
        fclose(fp);
        return 1;
    }

    char line[2000];
    char *token;
    char *ageToken;
    int ageCategory;

    fgets(line, sizeof(line), fp);

    line[strcspn(line, "\r\n")] = '\0';
    fprintf(out, "%s,AgeCategory\n", line);

    while (fgets(line, sizeof(line), fp))
    {
        char copy[2000];

        strcpy(copy, line);

        token = strtok(copy, ",");       // PassengerId
        token = strtok(NULL, ",");       // Survived
        token = strtok(NULL, ",");       // Pclass
        token = strtok(NULL, ",");       // Name
        token = strtok(NULL, ",");       // Sex
        ageToken = strtok(NULL, ",");    // Age

        ageCategory = 0;

        if (ageToken != NULL && strlen(ageToken) > 0)
        {
            float age = atof(ageToken);

            if (age <= 18)
                ageCategory = 1;

            else if (age <= 40)
                ageCategory = 2;

            else
                ageCategory = 3;
        }

        line[strcspn(line, "\r\n")] = '\0';

        fprintf(out, "%s,%d\n", line, ageCategory);
    }

    fclose(fp);
    fclose(out);

    printf("New file created successfully: titanic_new.csv\n");

    return 0;
}