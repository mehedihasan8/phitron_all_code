#include<stdio.h>
int main(){

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if (num1 % num2 == 0 || num2 % num1 == 0) {
        printf("Multiples\n");
    } else {
        printf("No Multiples\n");
    }

    return 0;
}