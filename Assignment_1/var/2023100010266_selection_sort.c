#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection_sort(int arr[], int n, long long *compare, long long *swaps) {
    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j) {
            (*compare)++;
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            // Swap elements
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
            (*swaps)++;
        }
    }
}

int main() {
    const int len = 1000;
    int arr[len];
    long long compare = 0, swaps = 0;

    // generate random number
    srand((unsigned int)time(NULL));

    // get maximum value
    long long var;
    printf("Enter the maximum value for array elements: ");
    scanf("%lld", &var);


    for (int i = 0; i < len; i++) {
        arr[i] = rand() % var + 1;
    }

    clock_t start_time = clock();
    selection_sort(arr, len, &compare, &swaps);
    clock_t end_time = clock();

    double selection_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Time for selection sort: %f seconds\n", selection_time);
    printf("Swap Number = %lld\nComparison Number = %lld\n", swaps, compare);

    return 0;
}
