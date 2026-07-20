#include <stdio.h>

int main()
{
    int score;

    printf("Score: ");
    scanf("%d", &score);

    if (score >= 80 && score <= 100)
    {
        printf("Score: %d -> Grade: A (4.0) — Pass\n", score);
    }
    else if (score >= 75)
    {
        printf("Score: %d -> Grade: B+ (3.5) — Pass\n", score);
    }
    else if (score >= 70)
    {
        printf("Score: %d -> Grade: B (3.0) — Pass\n", score);
    }
    else if (score >= 65)
    {
        printf("Score: %d -> Grade: C+ (2.5) — Pass\n", score);
    }
    else if (score >= 60)
    {
        printf("Score: %d -> Grade: C (2.0) — Pass\n", score);
    }
    else if (score >= 55)
    {
        printf("Score: %d -> Grade: D+ (1.5) — Pass\n", score);
    }
    else if (score >= 50)
    {
        printf("Score: %d -> Grade: D (1.0) — Pass\n", score);
    }
    else if (score >= 0)
    {
        printf("Score: %d -> Grade: F (0.0) — Fail\n", score);
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}