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

    int sumpromediopro[3][23];

    int progresopromedio[3][23];

    int progresopromediof[3][23];

    int promedioprogreso1[3];

    printf("\n");
    printf("2.- El promedio de cada progreso es: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 23; j++)
        {
            sumpromediopro[i][j] = num[j][i] + sumpromediopro[i][j];

            progresopromedio[i][j] = sumpromediopro[i][j] / 23;

            promedioprogreso1[i] = progresopromedio[i][j];
        }
        printf("El promedio del progreso es %d es: %d\n", i, promedioprogreso1[i]);
    }

    return 0;
}