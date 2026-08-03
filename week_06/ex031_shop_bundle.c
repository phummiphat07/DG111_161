#include <stdio.h>
#include <stdbool.h>
int main()
{
    int gold = 1000;
    int selection;
    int total = 0;
    bool boughtSword = false, boughtArmor = false;
    do
    {
        printf("=== ITEM SHOP ===\n");
        printf("Gold: %d\n", gold);
        printf("1. Health Potion  - 50 Gold    (+50 HP)\n");
        printf("2. Mana Potion  - 80 Gold    (+50 MP)\n");
        printf("3. Iron Sword  - 500 Gold   (+20 ATK)\n");
        printf("4. Leather Armor - 300 Gold   (+15 DEF)\n");
        printf("5. Checkout\n");
        printf("Select an item: ");
        scanf("%d", &selection);
        switch (selection)
        {
        case 1:
            if (total + 50 > gold)
                printf("Not enough Gold!\n");
            else
                total += 50;
            printf("You bought a Health Potion!\n");
            break;
        case 2:
            if (total + 80 > gold)
                printf("Not enough Gold!\n");
            else
            {
                total += 80;
                printf("You bought a Mana Potion!\n");
            }
            break;
        case 3:
            if (total + 500 > gold)
                printf("Not enough Gold!\n");
            else
            {
                total += 500;
                printf("You bought an Iron Sword!\n");
                boughtSword = true;
            }
            break;
        case 4:
            if (total + 300 > gold)
                printf("Not enough Gold!\n");
            else
            {
                total += 300;
                printf("You bought Leather Armor!\n");
                boughtArmor = true;
            }
            break;
        case 5:
            break;
        default:
            printf("Invalid selection!\n");
        }
    } while (selection != 5);

    if (boughtSword && boughtArmor)
    {
        total = total * 90 / 100; // Apply 10% discount
    }
    printf("=== CHECKOUT ===\n");
    printf("Warrior Bundle! (-10%%)\n");
    gold -= total;
    printf("Total Paid : %d\n", gold);
    printf("Remaining : %d\n", gold);
    return 0;
}