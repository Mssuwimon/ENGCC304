#include <stdio.h>

int main() {
    // สร้าง array สำหรับเก็บคำอ่านตัวเลข
    char *numToWord[] = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
        "seventeen", "eighteen", "nineteen", "twenty"
    };

    int userInput;
    int found = 0; // flag สำหรับตรวจว่าเจอมั้ย

    printf("User Input : ");
    scanf("%d", &userInput);

    // ใช้ for loop เพื่อหาค่าที่ตรงกับ userInput
    for (int i = 0; i <= 20; i++) {
        if (userInput == i) {
            printf("Result : %s\n", numToWord[i]);
            found = 1;
            break; // 
        }
    }

    // ถ้าไม่พบในช่วงที่กำหนด
    if (!found) {
        printf("Result : out of range (0 - 20)\n");
    }

    return 0;
}
