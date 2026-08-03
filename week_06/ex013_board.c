#include <stdio.h>
int main()
{
    int raws = 3;
    int cols = 5;
    int count = 1;
    for (int i = 0; i < raws; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("+---");
        }
        printf("+\n");
        for (int j = 0; j < cols; j++)
        {
            printf("| %2d", count++);
        }
        {
            printf("|\n");
        }
    }
    for (int j = 0; j < cols; j++)
    {
        printf("+---");
    }
    printf("+\n");
    return 0;
}