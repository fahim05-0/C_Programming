#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("titanic_new.csv", "r");

    if (fp == NULL)
    {
        printf("Could not open titanic_new.csv\n");
        return 1;
    }

    char line[2000];
    char *token;

    int survived[2][3][3] = {{{0}}};
    int dead[2][3][3] = {{{0}}};

    fgets(line, sizeof(line), fp);

    while (fgets(line, sizeof(line), fp))
    {
        int survival;
        int pclass;
        int sex;
        int ageCategory;

        token = strtok(line, ",");       // PassengerId

        token = strtok(NULL, ",");       // Survived
        survival = atoi(token);

        token = strtok(NULL, ",");       // Pclass
        pclass = atoi(token);

        token = strtok(NULL, ",");       // Name

        token = strtok(NULL, ",");       // Sex

        if (strcmp(token, "male") == 0)
            sex = 0;
        else
            sex = 1;

        token = strtok(NULL, ",");       // Age
        token = strtok(NULL, ",");       // SibSp
        token = strtok(NULL, ",");       // Parch
        token = strtok(NULL, ",");       // Ticket
        token = strtok(NULL, ",");       // Fare
        token = strtok(NULL, ",");       // Cabin
        token = strtok(NULL, ",");       // Embarked
        token = strtok(NULL, ",");       // AgeCategory

        ageCategory = atoi(token);

        if (ageCategory >= 1 && ageCategory <= 3 &&
            pclass >= 1 && pclass <= 3)
        {
            if (survival == 1)
                survived[sex][ageCategory - 1][pclass - 1]++;
            else
                dead[sex][ageCategory - 1][pclass - 1]++;
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
                {
                    percentage = (double)survived[sex][age][pclass] /
                                 total * 100;
                }

                printf("%s\t%d\t%d\t%d\t%d\t\t%.2f%%\n",
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