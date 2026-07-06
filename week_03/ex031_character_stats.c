#include <stdio.h>

int main() {
    char name[100];
    int hp;
    int attack;
    int defense;
    int level;

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

    printf("\n=== สรุปข้อมูลตัวละคร ===\n");
    printf("Name  : %s\n", name);
    printf("Level : %d\n", level);
    printf("HP    : %d\n", hp);
    printf("ATK   : %d\n", attack);
    printf("DEF   : %d\n", defense);

    return 0;
}
