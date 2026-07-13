#include <stdio.h>
#include <math.h>

int main()
{
    int attack, defense, hit_number, base_damage, final_damage;
    int enemy_hp = 500;

    printf("=== COMBAT SIMULATOR ===\n");
    printf("Player Attack: ");
    scanf("%d", &attack);
    printf("Enemy Defense: ");
    scanf("%d", &defense);
    printf("Hit Number: ");
    scanf("%d", &hit_number);

    base_damage = attack - defense;
    if (base_damage < 0)
    {
        base_damage = 0;
    }

    if (hit_number % 5 == 0)
    {

        final_damage = (int)ceil((float)base_damage * 1.5f);
        printf("Damage = %d *** CRITICAL HIT! x1.5 ***\n", final_damage);
    }
    else
    {
        final_damage = base_damage;
        printf("Damage = %d (Normal)\n", final_damage);
    }

    enemy_hp = enemy_hp - final_damage;
    printf("Enemy Remaining HP: %d\n", enemy_hp);

    return 0;
}