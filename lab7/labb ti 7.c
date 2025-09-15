#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int question, num;
bool condition = true;
int check;

int main() {
  srand(time(NULL));
  num = rand() % 100 + 1;

  while (condition) {
    printf("you want to play the game (Yes = 1 / Exit = -1 )\n");
    check = scanf(" %d", &question);
    if (check == 0) {
      printf("โปรดป้อนตัวเลข yes = 1 / Exit = -1 เท่านั้น \n");
      while (getchar() != '\n')
        ;
    } else if (question == 1) {
      int score = 100;
      int max = 100;
      int min = 1;
      int int_num = 0;

      printf("welcome to เกมทายตัวเลข \n");
      printf("ป้อนตัวเลขทายกันน, score ( %d )\n", score);

      while (int_num != num) {
        scanf(" %d", &int_num);

        if (score != 0) {
          if (int_num > num) {
            score -= 10;
            max = int_num - 1;
            printf("Sorry, the winning number is HIGHER than %d score is ( %d "
                   ") \n",
                   int_num, score);
            printf("Guess the winning number %d - %d \n", min, max);

          } else if (int_num < num) {
            score -= 10;
            min = int_num + 1;
            printf(
                "Sorry, the winning number is LOWER than %d score is ( %d ) \n",
                int_num, score);
            printf("Guess the winning number %d - %d \n", min, max);
          }

        } else if (score == 0) {
          printf("Game over \n");
          break;
        }
      }
      if (int_num == num) {
        printf("That is correct! The winning number is %d score is %d \n",
               int_num, score);
        printf(" %s", "---------------- \n");
      }

    } else if (question == -1) {
      printf("Exit to game ");
      condition = false;

    } else {
      printf("โปรดป้อนตัวเลข yes = 1 / Exit = -1 เท่านั้น \n");
      condition = true;
    }
  }
  return 0;
}
