#include <stdio.h>

int main()
{

    printf("\n 1: Triangle\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n 2: Square\n");
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf(" *");
        }
        printf("\n");
    }

    printf("\n 3: Diamond (n =3)\n");
    int d = 3;
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for (int i = d - 1; i >= 1; i--)
    {
        for (int j = 1; j <= d - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}