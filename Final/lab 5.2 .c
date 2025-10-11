#include <stdio.h>

int main() {
    char input[10];
    int score;

    printf("enter score : ");
    scanf("%s", input);

    // ตรวจสอบว่าเป็นตัวเลขหรือไม่
    if (sscanf(input, "%d", &score) != 1) {
        printf("please enter number only.\n");
        return 0;
    }

    // ใช้ if-else เพื่อแยกช่วงคะแนน
    char grade;
    if (score < 0 || score > 100) {
        printf("Invalid score!\n");
        return 0;
    } else if (score < 50) grade = 'F';
    else if (score < 55) grade = 'D';
    else if (score < 60) grade = 'D';
    else if (score < 65) grade = 'C';
    else if (score < 70) grade = 'C';
    else if (score < 75) grade = 'B';
    else if (score < 80) grade = 'B';
    else grade = 'A';

    // ใช้ switch-case แสดง output สร้างสรรค์
    switch (grade) {
        case 'A': printf("A !\n"); break;
        case 'B': printf("B :)\n"); break;
        case 'C': printf("C -\n"); break;
        case 'D': printf("D ...\n"); break;
        case 'F': printf("F !!!\n"); break;
        default: printf("Error!\n");
    }

    return 0;
}
