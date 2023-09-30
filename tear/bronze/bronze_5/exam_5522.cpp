#include<stdio.h>
#define SIZE 5

int main(){
    
    int a[SIZE];
    int sum = 0;

    for(int i=0; i < SIZE; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    
    printf("%d", sum);

}