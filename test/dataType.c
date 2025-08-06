#include<stdio.h>
int main() {
    char charVal;
    int number1;

    scanf("%c", &charVal);
    scanf("%d", &number1);

    printf("You entered character: '%c'\n", charVal);
    printf("You entered signed short: %d", number1);
    return 0;
}