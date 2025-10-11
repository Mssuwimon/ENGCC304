#include <stdio.h>

int main(){
    char user[60];
    int year;

    printf("Enter your name please: ");
    scanf("%s", user);
    printf("Enter your age please: ");
    scanf("%d", &year);

    printf("------------\n");
    printf("Hello %s\n", user);
    printf("Age = %d\n", year);

    return 0;
}
