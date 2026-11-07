#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getField(char **p, char *field)
{
    int i = 0;
    int quote = 0;

    while (**p != '\0' && **p != '\n' && **p != '\r')
    {
        if (**p == '"')
            quote = !quote;
        else if (**p == ',' && !quote)
        {
            (*p)++;
            break;
        }
        else
            field[i++] = **p;

        (*p)++;
    }

    field[i] = '\0';
}

int main()
{
    FILE *fp = fopen("titanic_new.csv", "r");

    if (fp == NULL)
    {
        printf("Could not open titanic_new.csv\n");
        return 1;
    }

    char line[2000];
    char field[500];

    int survived[2][3][3] = {{{0}}};
    int dead[2][3][3] = {{{0}}};

    fgets(line, sizeof(line), fp);

    while (fgets(line, sizeof(line), fp))
    {
        char *p = line;

        int column = 0;
        int survival = -1;
        int pclass = 0;
        int sex = -1;
        int ageCategory = 0;

        while (*p != '\0' && *p != '\n' && *p != '\r')
        {
            getField(&p, field);

            if (column == 1)
                survival = atoi(field);

            else if (column == 2)
                pclass = atoi(field);

            else if (column == 4)
            {
                if (strcmp(field, "male") == 0)
                    sex = 0;
                else if (strcmp(field, "female") == 0)
                    sex = 1;
            }

            else if (column == 12)
                ageCategory = atoi(field);

            column++;
        }

        if (survival == 1 || survival == 0)
        {
            if (pclass >= 1 && pclass <= 3)
            {
                if (sex >= 0 && sex <= 1)
                {
                    if (ageCategory >= 1 && ageCategory <= 3)
                    {
                        if (survival == 1)
                            survived[sex][ageCategory - 1][pclass - 1]++;
                        else
                            dead[sex][ageCategory - 1][pclass - 1]++;
                    }
                }
            }
        }
    }

    fclose(fp);

    printf("Sex\tAge\tClass\tSurvived\tDead\tSurvival%%\n");

    for (int sex = 0; sex < 2; sex++)
    {
        for (int age = 0; age < 3; age++)
        {
            for (int pclass = 0; pclass < 3; pclass++)
            {
                int total = survived[sex][age][pclass] +
                            dead[sex][age][pclass];

                double percentage = 0;

                if (total > 0)
                    percentage = (double)survived[sex][age][pclass] /
                                 total * 100;

                printf("%s\t%d\t%d\t%d\t%d\t%.2f%%\n",
                       sex == 0 ? "Male" : "Female",
                       age + 1,
                       pclass + 1,
                       survived[sex][age][pclass],
                       dead[sex][age][pclass],
                       percentage);
            }
        }
    }

    return 0;
}