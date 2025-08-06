#include<stdio.h>
int main () {
    
    int userNumber;
    scanf("%d", &userNumber);

    int i = 0;
    
    while (i<=userNumber) {
        printf("%d \n", i);
        i++;
    }

    return 0;
}