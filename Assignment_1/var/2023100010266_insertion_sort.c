#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertion_srt(int array[], int size, long long *compare, long long *swap) {
    for (int step = 1; step < size; step++) {
        int key = array[step];
        int j = step - 1;
        
        while (j >= 0 && key < array[j]) {
            (*compare)++;
            array[j + 1] = array[j];
            --j;
            (*swap)++;
        }
        array[j + 1] = key;
    }
}

int main() {
    const int len = 1000;
    int arr[len];
    long long compare = 0, swap = 0;

    // random number generator
    srand((unsigned int)time(NULL));

    // read maximum value 
    long long var;
    printf("Enter the maximum value for array elements: ");
    scanf("%lld", &var);

    for (int i = 0; i < len; i++) {
        arr[i] = rand() % var + 1;
    }

    clock_t start_time = clock();
    insertion_srt(arr, len, &compare, &swap);
    clock_t end_time = clock();

    double insert_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Time for insertion sort: %f seconds\n", insert_time);
    printf("Swap Number = %lld\nComparison Number = %lld\n", swap, compare);

    return 0;
}
