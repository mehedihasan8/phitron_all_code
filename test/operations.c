#include<stdio.h>
int main() {
    int number1;
    int number2;
    scanf("%d", &number1);
    scanf("%d", &number2);
    int Sum = number1 + number2;
    int Difference = number1 - number2;
    int Product = number1 * number2;
    int Quotient = number1 / number2;
    int Modulus = number1 % number2;

    printf("Sum = %d\n", Sum);
    printf("Difference = %d\n", Difference);
    printf("Product = %d\n", Product);
    printf("Quotient = %d\n",Quotient);
    printf("Modulus = %d\n",Modulus);
    return 0;
}