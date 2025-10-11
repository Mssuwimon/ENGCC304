#include <stdio.h>
#include <string.h>

struct Student {
    char Name[20];
    char ID[10];
    float Score[5];   // ใช้ array เก็บคะแนน 5 วิชา
};
typedef struct Student S;

// ฟังก์ชันคำนวณเกรดรายวิชา
const char* calGrade(float score) {
    if(score >= 80) return "A";
    else if(score >= 75) return "B+";
    else if(score >= 70) return "B";
    else if(score >= 65) return "C+";
    else if(score >= 60) return "C";
    else if(score >= 55) return "D+";
    else if(score >= 50) return "D";
    else return "F";
}

int main() {
    S student[3];
    int i, j;

    // ป้อนข้อมูลนักเรียน 3 คน
    for(i=0; i<3; i++) {
        printf("Enter Student %d Name: ", i+1);
        getchar(); // เคลียร์ buffer
        fgets(student[i].Name, sizeof(student[i].Name), stdin);
        student[i].Name[strcspn(student[i].Name, "\n")] = 0; // ตัด \n ออก

        printf("Enter Student %d ID: ", i+1);
        scanf("%s", student[i].ID);

        printf("Enter 5 subject scores: ");
        for(j=0; j<5; j++) {
            scanf("%f", &student[i].Score[j]);
        }
        printf("\n");
    }

    // แสดงผล
    printf("\n--- Student Grade Report ---\n\n");
    for(i=0; i<3; i++) {
        float sum = 0;
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", student[i].Name);
        printf("ID: %s\n", student[i].ID);

        printf("Scores: ");
        for(j=0; j<5; j++) {
            printf("%.0f ", student[i].Score[j]);
            sum += student[i].Score[j];
        }
        printf("\n");

        printf("Grades: ");
        for(j=0; j<5; j++) {
            printf("%s ", calGrade(student[i].Score[j]));
        }
        printf("\n");

        printf("Average Scores: %.1f\n\n", sum / 5.0);
    }

    return 0;
}
