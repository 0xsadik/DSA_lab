#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    
    int arr[10];
    srand(time(0));
    
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 10 + 1;
        printf("%d\n", arr[i]);
    }
    printf("\n");

    return 0;
}