#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playChoice;     // ตัวเลือกเล่นหรือออก
    int randomNum;      // ตัวเลขที่สุ่มได้
    int guess;          // ตัวเลขที่ผู้ใช้ทาย
    int score = 100;    // คะแนนเริ่มต้น
    int validInput;     // สำหรับเช็กค่าป้อนผิด

    srand(time(NULL));  // สุ่มเปลี่ยนค่า random ทุกครั้งที่รัน

    do {
        printf("Do you want to play game (1=play, -1=exit) : ");
        validInput = scanf("%d", &playChoice);

        // ถ้าผู้ใช้ป้อนค่าที่ไม่ใช่ตัวเลข
        if (validInput != 1) {
            printf("Please enter only 1 or -1.\n\n");
            fflush(stdin); // ล้าง buffer กันพิมพ์ผิดซ้ำ
            while (getchar() != '\n'); // เคลียร์ input buffer
            continue;
        }

        // ออกจากเกม
        if (playChoice == -1) {
            printf("See you again.\n");
            break;
        }

        // เริ่มเกม
        if (playChoice == 1) {
            randomNum = rand() % 100 + 1;
            score = 100;
            printf("\n Welcome to Guess Number Game! \n");
            printf("I have a number between 1 and 100.\n");
            printf("You start with 100 points.\n\n");

            while (1) {
                printf("Enter your guess: ");
                if (scanf("%d", &guess) != 1) {
                    printf("Please enter a valid number!\n");
                    while (getchar() != '\n'); // ล้าง buffer
                    continue;
                }

                if (guess < randomNum) {
                    printf("Too low!\n");
                    score -= 10;
                } 
                else if (guess > randomNum) {
                    printf("Too high!\n");
                    score -= 10;
                } 
                else {
                    printf("\n Correct! The number was %d \n", randomNum);
                    printf("Your score: %d\n", score);
                    break;
                }

                if (score <= 0) {
                    printf("\n Game Over! The number was %d \n", randomNum);
                    break;
                }

                printf("Current score: %d\n\n", score);
            }
            printf("\n");
        } 
        else {
            printf("Please enter only 1 or -1.\n\n");
        }

    } while (1);

    return 0;
}