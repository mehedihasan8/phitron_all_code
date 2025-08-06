#include<stdio.h>
int main () {
    int userNumber;
    scanf("%d", &userNumber);


   for(int i = 0; i <= userNumber; i++ ){
    printf("Number is : %d\n", i);
   }

   for(char ch = 'A'; ch <= 'Z'; ch++) {
    printf("%c \n", ch);
   }

    return 0;
}