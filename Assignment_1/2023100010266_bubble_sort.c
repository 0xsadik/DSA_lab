#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bbl_sort(int arr[], int n) {
    int tmp;
    long long int compare = 0, swap = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            compare++;
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                swap++;
            }
        }
    }
    printf("Swap Number = %lld\nComparison number = %lld\n", swap, compare);
}

void print_bblsrt(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {

    clock_t start_time, end_time;
    double bubble_time;
    printf("Enter array length: ");


    int n;
    scanf("%d", &n);

    int arr[n];

    srand(time(0));

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    } 

    start_time = clock();

    bbl_sort(arr, n);
    end_time = clock();
    bubble_time = (double) (end_time - start_time) / CLOCKS_PER_SEC;
    printf("Time for bubble sort: %lf\n", bubble_time);
    // print_bblsrt(arr, n);



    return 0;

}