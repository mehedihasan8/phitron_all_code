#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    long long sum = 0;

    for(int i = 0; i<N; i++){

        sum = sum + arr[i];
    }

    if(sum>0){

    printf("%lld\n", sum);

    } else {
         printf("%lld\n", sum * -1);
    }


    return 0;
}
