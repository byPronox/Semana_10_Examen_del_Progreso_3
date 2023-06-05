#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num[23][3];

    int sumpromedio[23][1];

    int promedio[23][1];

    int promediof = 0;

    for (int i = 0; i < 23; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            num[i][j] = rand() % 10;
        }
    }

    printf("1.- El promedio de cada estudiante es: \n");

    for (int i = 0; i < 23; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sumpromedio[i][j] = num[i][j] + sumpromedio[i][j];

            promedio[i][j] = sumpromedio[i][j] / 3;

            promediof = promedio[i][j];

            printf("El promedio del estudiante %d es: %d\n", i++, promedio[i][j]);
        }
    }

    return 0;
}