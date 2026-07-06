#include <stdio.h>

int main() {
    char name[50];
    int age;
    float gpa;
    char favoriteSubject[50];

    printf("=== ป้อนข้อมูล ===\n");

    printf("ชื่อ: ");
    scanf("%s", name);

    printf("อายุ: ");
    scanf("%d", &age);

    printf("GPA: ");
    scanf("%f", &gpa);

    printf("วิชาโปรด: ");
    scanf("%s", favoriteSubject);

    printf("\n=== ข้อมูลส่วนตัว ===\n");
    printf("ชื่อ : %s\n", name);
    printf("อายุ : %d ปี\n", age);
    printf("GPA : %.2f\n", gpa);
    printf("วิชาโปรด : %s\n", favoriteSubject);

    return 0;
}