#include<stdio.h>
int main () {

    int n;

    for(n = 5; n <= 50; n++) {
        if(n % 2 == 0 ) { //skip any values
            continue;
        }
        printf("all odd number %d\n", n);
    }

    return 0;
}