#include <stdio.h>
#include <math.h>

int isPrime(int x){
    if(x < 2) return 0;
    for(int i=2; i<=sqrt(x); i++){
        if(x % i == 0) return 0;
    }
    return 1;
}

int main(){
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);

    int num[n];
    for(int i=0; i<n; i++){
        printf("Enter value[%d] : ", i);
        scanf("%d", &num[i]);
    }

    printf("\nIndex : ");
    for(int i=0; i<n; i++) printf("%2d ", i);

    printf("\nPrime : ");
    for(int i=0; i<n; i++){
        if(isPrime(num[i]))
            printf("%2d ", num[i]);
        else
            printf(" # ");
    }

    printf("\n");
    return 0;
}
