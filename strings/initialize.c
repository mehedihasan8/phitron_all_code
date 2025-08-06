#include<stdio.h>

int main(){

    // char a[4] = {'a', 'b', 'c', 'd'};
    char a[4] = "abc";
    printf("%d", sizeof(a)/sizeof(char));
    
    // normal way to print string

    for(int i = 0; i < sizeof(a)/sizeof(char); i++){
        printf("%c\n", a[i]);
    }

    //  buid in function to print string
    printf("%s\n", a);

    return 0;
}