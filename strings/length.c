#include<stdio.h>
#include<string.h>

int main(){
    
    char a[100];
    fgets(a, 100, stdin);
    int count = 0;

    // for(int i = 0; a[i] != '\0'; i++){
    //     count++;
    // }

    int i = 0;

    //  while(a[i] != '\0'){
    //     count ++;
    //     i++;
    // }
    
    int st = strlen(a);


    printf("Count : %d\n", st);

    printf("%s", a);

    return 0;

}