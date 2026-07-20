#include <stdio.h>

int main()
{
    printf("=== ITEM SHOP ===\n");
    printf("Gold left: 1000 gold\n");
    printf("1. Health Potion (50 gold)\n");
    printf("2. Mana Potion (30 gold)\n");
    printf("3. Strength Elixir (100 gold)\n");
    printf("4. Defense Tonic (80 gold)\n");
    printf("5. Exit Shop\n");

    int choice = 0;
    printf("Select your item (1-5): ");
    scanf("%d", &choice);
    printf("=== Purchase ===\n");
    if (choice == 1)
    {
        printf("You bought a Health Potion for 50 gold.\n");
    }
    else if (choice == 2)
    {
        printf("You bought a Mana Potion for 30 gold.\n");
    }
    else if (choice == 3)
    {
        printf("You bought a Strength Elixir for 100 gold.\n");
    }
    else if (choice == 4)
    {
        printf("You bought a Defense Tonic for 80 gold.\n");
    }
    else if (choice == 5)
    {
        printf("Thank you for visiting the shop!\n");
    }
    else
    {
        printf("Invalid choice. Please select a valid item number.\n");
    }
    printf("Item purchased successfully! ✓\n");
    return 0;
}