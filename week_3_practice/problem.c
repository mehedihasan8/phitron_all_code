#include <stdio.h>

int main() {
    char letter;
    scanf("%c", &letter);

    if (letter == 'z') {
        
        printf("a\n");
    } else {
       
        printf("%c\n", letter + 1);
    }

    return 0;
}
