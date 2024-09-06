#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bbl_srt(long long a[], long long n, long long *compare, long long *swaps) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            (*compare)++;
            if (a[j] > a[j + 1]) {
                // swap time
                long long temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                (*swaps)++;
            }
        }
    }
}

int main() {
    const long long len = 1000;
    long long arr[len];
    long long compare = 0, swaps = 0;

    // random number generate
    srand((unsigned int)time(NULL));

    // maximum value
    long long var;
    printf("Enter the maximum value for array elements: ");
    scanf("%lld", &var);

    // random ones 
    for (int i = 0; i < len; i++) {
        arr[i] = rand() % var + 1;
    }

    clock_t start_time = clock();
    bbl_srt(arr, len, &compare, &swaps);
    clock_t end_time = clock();

    double bubble_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Time for bubble sort: %f seconds\n", bubble_time);
    printf("Swap Number = %lld\nComparison Number = %lld\n", swaps, compare);

    return 0;
}
