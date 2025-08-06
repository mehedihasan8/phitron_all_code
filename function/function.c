#include<stdio.h>

int totalSum(int a, int b);

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    int sum = totalSum(a, b);

    printf("Total Sum %d\n", sum);

    return 0;
}

int totalSum(int a, int b) {
    return a + b;
}
