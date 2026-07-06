#include <stdio.h>

int main() {
    char name[50];
    int age;
    float gpa;
    char favoriteSubject[50];

    char age_str[50];
    char gpa_str[50];

    printf("=== ป้อนข้อมูล ===\n");

    printf("ชื่อ: ");
    scanf("%s", name);

    printf("อายุ: ");
    scanf("%d", &age);

    printf("GPA: ");
    scanf(" %f", &gpa);

    printf("วิชาโปรด: ");
    scanf(" %s", favoriteSubject);

    sprintf(age_str, "%d years old", age);
    sprintf(gpa_str, "%.2f", gpa);

    printf("\n=== PERSONAL CARD ===\n");
    
    printf("┌────────────────────────────┐\n");
    printf("│ Name  : %-18s │\n", name);
    printf("│ Age   : %-18s │\n", age_str);
    printf("│ GPA   : %-18s │\n", gpa_str);
    printf("│ Major : %-18s │\n", favoriteSubject);
    printf("└────────────────────────────┘\n");

    return 0;
}
