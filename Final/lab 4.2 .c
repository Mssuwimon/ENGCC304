#include <stdio.h>

int main(){
    char empID[11];   // เก็บรหัสพนักงาน (ไม่เกิน 10 ตัวอักษร +1 สำหรับ '\0')
    int hours;        // จำนวนชั่วโมงทำงาน
    float rate, salary; // อัตราค่าจ้างต่อชั่วโมง และเงินเดือนรวม

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", empID);

    printf("Input the working hrs: ");
    scanf("%d", &hours);

    printf("Salary amount/hr: ");
    scanf("%f", &rate);

    salary = hours * rate; // ตัวดำเนินการคูณ เพื่อคำนวณรายได้รวม

    printf("Expected Output:\n");
    printf("Employees ID = %s\n", empID);
    printf("Salary = U$ %.2f\n", salary);

    return 0;
}
