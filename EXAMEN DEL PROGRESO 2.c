#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>

int main()
{
    int c;
    int f;

    int num[23][3];

    int sumpromedio[23][1];

    for (int i = 0; i < 23; i++)
    {
        for (int j = 0; i < 3; i++)
        {
            num[i][j] = rand()%10;

        }
        
    }

    for (int i = 0; i < 23; i++)
    {
        for (int j = 0; i < 3; i++)
        {
            sumpromedio[i][j] = num[i][j] + sumpromedio[i][j];

        }
        
    }


    

    return 0;
}
}