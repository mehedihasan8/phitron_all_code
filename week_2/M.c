#include<stdio.h>
int main(){

    char a;
    scanf("%c", &a);

    if(a>= '0' && a<='9'){
        printf("IS DIGIT\n");
    } else if(a>='A' && a<='Z'){
        printf("ALPHA\nIS CAPITAL");
    } else{
         printf("ALPHA\nIS SMALL");
    }


    return 0;
}