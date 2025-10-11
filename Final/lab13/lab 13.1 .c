#include <stdio.h>

// ฟังก์ชันสำหรับสลับค่าด้วย Pointer
void swapNumbers(int *a, int *b) {
    int temp;
    temp = *a;   // เก็บค่าของตัวแรกไว้ก่อน
    *a = *b;     // เอาค่าของตัวที่สองมาใส่ตัวแรก
    *b = temp;   // เอาค่าที่เก็บไว้มาใส่ตัวที่สอง
}

int main() {
    int num1, num2;
    int *ptr1, *ptr2;  // ประกาศ pointer 2 ตัว

    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 : ");
    scanf("%d", &num2);

    // ให้ pointer ชี้ไปที่ตัวแปรจริง
    ptr1 = &num1;
    ptr2 = &num2;

    printf("\nBefore swap (num1 & num2) : %d, %d\n", num1, num2);

    // เรียกใช้ฟังก์ชันสลับค่า โดยส่ง pointer เข้าไป
    swapNumbers(ptr1, ptr2);

    printf("After swap (num1 & num2)  : %d, %d\n", num1, num2);

    return 0;
}
