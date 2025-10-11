#include <stdio.h>

                int main() {
                    int N;

                    printf("Enter value: ");
                    scanf("%d", &N);

                    printf("Series: ");

                    // ถ้าเป็นเลขคี่ -> แสดงเฉพาะเลขคี่จาก 1 ถึง N
                    if (N % 2 != 0) {
                        for (int i = 1; i <= N; i++) {
                            if (i % 2 != 0) {
                                printf("%d ", i);
                            }
                        }
                    }
                    // ถ้าเป็นเลขคู่ -> แสดงเฉพาะเลขคู่จาก N ลงถึง 0
                    else {
                        for (int i = N; i >= 0; i--) {
                            if (i % 2 == 0) {
                                printf("%d ", i);
                            }
                        }
                    }

                    printf("\n");
                    return 0;
                }