#include<stdio.h>

void helloHW(int count);

int main() {
    helloHW(5);
    
    return 0;
}

void helloHW(int count){

    if(count == 0) {
        return;
    }

    printf("Hello World!\n");
    helloHW(count-1);
}