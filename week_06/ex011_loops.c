#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("Forloop sum: %d\n", sum);
    sum = 0;
    int j = 1;
    while (j <= 10)
    {
        sum += j;
        j++;
    }
    printf("Whileloop sum: %d\n", sum);
    sum = 0;
    int k = 1;
    do
    {
        sum += k;
        k++;
    } while (k <= 10);

    printf("do-while sum: %d\n", sum);
    return 0;
}