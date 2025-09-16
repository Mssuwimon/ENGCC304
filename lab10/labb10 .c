#include <stdio.h>

int main() {
    char word[100];
    int i, j, len, check = 1;

    printf("Enter a word: ");
    scanf("%s", word);

    len = strlen(word);

    for(i = 0, j = len - 1; i < j; i++, j--) {
        if(word[i] != word[j]) {
            check = 0;
            break;
        }
    }

    if(check == 1) {
        printf("Pass\n");
    } else {
        printf("Not Pass\n");
    }

    return 0;
}
