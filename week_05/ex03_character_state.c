#include <stdio.h>
#include <stdbool.h>
int main()
{
    int max_hp, damage, poisoned_input, attack_count;
    printf("Max HP: ");
    scanf("%d", &max_hp);
    printf("Damage Taken: ");
    scanf("%d", &damage);
    printf("Poisoned (0/1): ");
    scanf("%d", &poisoned_input);
    _Bool is_poisoned = poisoned_input;
    printf("Attack Count: ");
    scanf("%d", &attack_count);

    int hp = max_hp - damage;
    if (hp < 0)
        hp = 0; // ห้าม hp ติดลบ
    printf("=== CHARACTER STATE ===\n");
    int filled = hp * 10 / max_hp;
    printf("HP : [");
    for (int i = 0; i < 10; i++)
    {
        printf(i < filled ? "█" : "-");
    }
    printf("] %d/%d", hp, max_hp);

    return 0;
}