#include<stdio.h>
#include<string.h>

int main(){
    
    char a[19];

    //gets(a); build in function to get string

    fgets(a, 100, stdin); // fgets is a build in function to get string

    printf("%s", a);

    return 0;

}