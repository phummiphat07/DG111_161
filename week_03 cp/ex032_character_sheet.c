#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int hp;
    int attack;
    int defense;
    int level;
    float power_score;

    char level_str[50];
    char hp_str[50];
    char atk_str[50];
    char def_str[50];
    char power_str[50];

    printf("=== สร้างตัวละคร ===\n");

    printf("ชื่อตัวละคร : ");
    scanf(" %[^\n]", name); 

    printf("HP สูงสุด   : ");
    scanf(" %d", &hp);

    printf("Attack Power: ");
    scanf(" %d", &attack);

    printf("Defense     : ");
    scanf(" %d", &defense);

    printf("Level       : ");
    scanf(" %d", &level);

    for (int i = 0; name[i] != '\0'; i++) {
        name[i] = toupper(name[i]);
    }

    power_score = (attack * 2) + defense + ((float)hp / 10);

    sprintf(level_str, "%d", level);
    sprintf(hp_str, "%d / %d", hp, hp);
    sprintf(atk_str, "%d", attack);
    sprintf(def_str, "%d", defense);
    sprintf(power_str, "%.1f", power_score);

    printf("\n=== CHARACTER SHEET ===\n");
    
    printf("╔════════════════════════════════╗\n");
    printf("║ %-30s ║\n", name);
    printf("╠════════════════════════════════╣\n");
    printf("║ Level : %-22s ║\n", level_str);
    printf("║ HP    : %-22s ║\n", hp_str);
    printf("║ ATK   : %-22s ║\n", atk_str);
    printf("║ DEF   : %-22s ║\n", def_str);
    printf("║ POWER : %-22s ║\n", power_str);
    printf("╠════════════════════════════════╣\n");
    printf("║ HP Bar: [██████████] 100%%     ║\n");
    printf("╚════════════════════════════════╝\n");

    return 0;
}