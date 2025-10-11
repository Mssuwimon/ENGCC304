#include <stdio.h>

int main() {
    int arr[100];
    int n = 0;
    int min, max;

    printf("Enter value: ");
    while (scanf("%d", &arr[n]) == 1) {
        n++;
        if (getchar() == '\n') break;    }

    min = max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("\nIndex: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", i);
    }

    printf("\nArray: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nMin : %d\n", min);
    printf("Max : %d\n", max);

    return 0;
}
