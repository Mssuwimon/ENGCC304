#include <stdio.h>

int main() {
    char empID[11];
    int hrs;
    float rate, salary;
    int choice;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", empID);

    printf("Input the working hrs: ");
    scanf("%d", &hrs);

    printf("Salary amount/hr: ");
    scanf("%f", &rate);

    // คำนวณเงินเดือนขั้นต้น
    salary = hrs * rate;

    // เงื่อนไขตรวจสอบด้วย if-else
    if (hrs <= 0 || rate <= 0) {
        printf("\nError: Invalid working hours or rate!\n");
    } 
    else {
        printf("\n----\n");
        printf("Expected Output:\n");
        printf("Employees ID = %s\n", empID);

        // ใช้ switch case เพื่อเพิ่มความสร้างสรรค์ในการเลือกแสดงผล
        printf("Choose output format:\n");
        printf("1. Show Salary (Normal)\n");
        printf("2. Show Salary (With bonus 10%%)\n");
        printf("Select: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Salary = U$ %.2f\n", salary);
                break;
            case 2:
                salary = salary + (salary * 0.10);
                printf("Salary (Bonus) = U$ %.2f\n", salary);
                break;
            default:
                printf("Invalid choice! Showing normal salary.\n");
                printf("Salary = U$ %.2f\n", salary);
        }
    }

    return 0;
}
