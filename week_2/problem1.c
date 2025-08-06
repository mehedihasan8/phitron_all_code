#include<stdio.h>

int main(){

    int num1;
    int num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 >= num2){
        printf("Yes\n");  
    } else {
        printf("No\n");
    }

    return 0;
}
