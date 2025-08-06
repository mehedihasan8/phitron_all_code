#include<stdio.h>
int main() {
    int firstNum = 0;
    int secondNum = 1;
    int nextNum;
    int num;

    printf("Enter Your Number: ");
    scanf("%d", &num);

    printf("%d %d ", firstNum, secondNum);
    for(int i = 2; i<=num; i++){
        nextNum = firstNum + secondNum;
        printf("%d ", nextNum);
        firstNum = secondNum;
        secondNum = nextNum;
    }
    
    return 0;
}