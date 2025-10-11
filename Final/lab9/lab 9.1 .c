#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    if (num == 2) {
        return 1; 
    }
    if (num % 2 == 0) {
        return 0; 
    }

    // ตรวจสอบหารด้วยเลขคี่เท่านั้น
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1; 
}

int main() {
    int Num[100];
    int n = 0, i = 0;

    printf("Enter array Size: ");
    scanf("%d", &n);

   
    if (n > 100 || n <= 0) {
        printf("Invalid array size! Please enter between 1-100.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &Num[i]);
    }

    printf("\n------------\n");

    for (i = 0; i < n; i++) {
        if (isPrime(Num[i])) {
            printf("%d ", Num[i]); 
        } else {
            printf("# "); 
        }
    }

    printf("\n");
    return 0;
}
