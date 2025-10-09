#include <stdio.h>

int main() {
    int position, exp, project;
    float baseSalary = 0, expBonus = 0, specialBonus = 0, total = 0;

    printf("Enter position (1=Junior, 2=Mid-Level, 3=Senior): ");
    scanf("%d", &position);
    printf("Enter years of experience: ");
    scanf("%d", &exp);
    printf("Enter number of projects completed this year: ");
    scanf("%d", &project);

    // กำหนดเงินเดือนพื้นฐานตามตำแหน่ง
    if (position == 1)
        baseSalary = 20000;
    else if (position == 2)
        baseSalary = 35000;
    else if (position == 3)
        baseSalary = 50000;
    else {
        printf("Invalid position\n");
        return 0;
    }

    // คำนวณโบนัสตามอายุงาน
    if (exp < 1)
        expBonus = 0;
    else if (exp <= 3)
        expBonus = baseSalary * 0.10;
    else if (exp <= 5)
        expBonus = baseSalary * 0.15;
    else
        expBonus = baseSalary * 0.20;

    // โบนัสพิเศษถ้ามีมากกว่า 5 โปรเจกต์
    if (project > 5)
        specialBonus = baseSalary * 0.05;

    // คำนวณเงินเดือนสุทธิ
    total = baseSalary + expBonus + specialBonus;

    printf("\nBase Salary: %.0f THB\n", baseSalary);
    printf("Experience Bonus: %.0f THB\n", expBonus);
    printf("Special Bonus: %.0f THB\n", specialBonus);
    printf("Total Salary: %.0f THB\n", total);

    return 0;
}

