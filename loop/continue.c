#include<stdio.h>
int main () {

    int n;

    for(n = 1; n <= 10; n++) {
        if(n == 8) { //skip any values
            continue;
        }
        printf("number %d\n", n);
    }

    return 0;
}