#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("=== Number Guessing Game (1-100) ===\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number)
        {
            printf("Too low! \n");
        }
        else if (guess > number)
        {
            printf("Too high! \n");
        }
        else
        {
            printf("Correct! You guessed the number %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number);

    return 0;
}