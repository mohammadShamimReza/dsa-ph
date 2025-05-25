#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int m = n + 10;
    int x = 1;
    int y = m / 2;

    for (int i = 0; i < m / 2 + 1; i++)
    {
        for (int k = 0; k < y; k++)
        {
            printf(" ");
        }
        y = y - 1;

        for (int j = 0; j < x; j++)
        {
            printf("*");
        }
        x = x + 2;
        printf("\n");

    }

    for (int l = 0; l < 5; l++)
    {
        printf("     ");
        for (int o = 0; o < n; o++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
};