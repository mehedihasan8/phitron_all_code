#include <stdio.h>

// int fibonacci (int n) {
//     if (n <= 1) {
//         return n;
//     }
    
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

int main() {
    int num;
    printf("Enter the number of num: ");
    scanf("%d", &num);

    // for (int i = 0; i < num; i++) {
    //     printf("%d ", fibonacci(i));
    // }

    int first = 0;
    int second = 1;
    int next;
    printf("%d %d ", first, second);
    for (int i = 2; i < num; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    return 0;
}