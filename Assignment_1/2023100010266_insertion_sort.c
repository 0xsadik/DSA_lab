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
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    srand((unsigned int)time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    }

    long long compare = 0, swap = 0;

    clock_t start_time = clock();
    insertion_srt(arr, n, &compare, &swap);
    clock_t end_time = clock();

    double insert_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Swap Number = %lld\nComparison Number = %lld\n", swap, compare);
    printf("Time for insertion sort: %f seconds\n", insert_time);

    free(arr);
    return 0;
}
