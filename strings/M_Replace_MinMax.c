#include<stdio.h>

int main(){
     int n;
        scanf("%d", &n);
        int a[n];

        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }

        int min = a[0];
        int max = a[0];

        for(int i = 0; i < n; i++){
            if(a[i] < min){
                min = a[i];
            }
            if(a[i] > max){
                max = a[i];
            }
        }
        
        for(int i = 0; i < n; i++){
            if(a[i] == min){
                a[i] = max;
            }else if(a[i] == max){
                a[i] = min;
            }
        }

        for(int i = 0; i < n; i++){
            printf("%d ", a[i]);
        }


    return 0;
}