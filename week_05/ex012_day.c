#include <stdio.h>

int main()
{
    int day;

    printf("Enter day (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("1 -> Monday (Weekday)\n");
        break;
    case 2:
        printf("2 -> Tuesday (Weekday)\n");
        break;
    case 3:
        printf("3 -> Wednesday (Weekday)\n");
        break;
    case 4:
        printf("4 -> Thursday (Weekday)\n");
        break;
    case 5:
        printf("5 -> Friday (Weekday)\n");
        break;
    case 6:
        printf("6 -> Saturday (Weekend!)\n");
        break;
    case 7:
        printf("7 -> Sunday (Weekend!)\n");
        break;
    default:
        printf("Invalid input\n");
        break;
    }
    return 0;
}