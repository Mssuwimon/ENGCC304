#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int temp, digit, sum = 0, count = 0;

    temp = num;
    // นับจำนวนหลัก
    while(temp > 0) {
        count++;
        temp = temp / 10;
    }

    temp = num;
    // คำนวณผลรวมของเลขยกกำลัง
    while(temp > 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    if(sum == num) {
        return 1; // เป็น Armstrong
    } else {
        return 0; // ไม่ใช่ Armstrong
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isArmstrong(n)) {
        printf("Pass\n");
    } else {
        printf("Not Pass\n");
    }

    return 0;
}
