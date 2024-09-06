#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection_srt(int arr[], int n, long long *compare, long long *swaps) {
    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j) {
            (*compare)++;
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
            (*swaps)++;
        }
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

    // generate random numbers
    srand((unsigned int)time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    }

    long long compare = 0, swaps = 0;

    clock_t start_time = clock();
    selection_srt(arr, n, &compare, &swaps);
    clock_t end_time = clock();

    double selection_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Time for selection sort: %f seconds\n", selection_time);
    printf("Swap Number = %lld\nComparison Number = %lld\n", swaps, compare);

    free(arr);
    return 0;
}
