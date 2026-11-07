#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("titanic.csv", "r");

    if (fp == NULL)
    {
        printf("Could not open file\n");
        return 1;
    }

    char *token;
    int survived;
    char line[1000];
0
    int maleT = 0, femaleT = 0;
    int maleS = 0, femaleS = 0;

    fgets(line, sizeof(line), fp);

    while (fgets(line, sizeof(line), fp))
    {
        token = strtok(line, ",");

        token = strtok(NULL, ",");

        if (token == NULL)
            continue;

        survived = atoi(token);
        token = strtok(NULL, ",");

        token = strtok(NULL, ",");

        if (token == NULL)
            continue;

        if (token[0] == '"')
        {
            token = strtok(NULL, ",");

            if (token == NULL)
                continue;
            token = strtok(NULL, ",");
        }
        else
            token = strtok(NULL, ",");

        if (token == NULL)
            continue;

        token[strcspn(token, "\r\n")] = '\0';
        if (strcmp(token, "male") == 0)
        {
            maleT++;
            if (survived == 1)
                maleS++;
        }
        else if (strcmp(token, "female") == 0)
        {
            femaleT++;
            if (survived == 1)
                femaleS++;
        }
    }

    fclose(fp);

    float malePercentage = (float)maleS / maleT * 100;
    float femalePercentage = (float)femaleS / femaleT * 100;
   
    printf("\nMale survival  : %.2f%%", malePercentage);
    printf("\nFemale survival: %.2f%%\n", femalePercentage);

    return 0;
}