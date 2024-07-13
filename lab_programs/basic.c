// #include<stdio.h>

// int main() {
//     printf("Hello world\n");

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     srand(0);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", rand());
//     }

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main() {
//     srand(time(0));
//     for (int i = 0; i < 5; i++) {
//         printf("%d\n", rand());
//     }

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main() {
//     for (int h = 0; h < 5; h++) {
//         srand(time(0));
//         for (int i = 0; i < 5; i++) {
//             printf(" %d %d\n",i, rand());
//         }
//     }

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main() {
//     int i, j;
//     clock_t start_time, end_time;
//     double time_passed;

//     start_time = clock();
//     for (i = 0; i < 100000; i++)
//         for (j = 0; j < 9999; j++)

//     end_time = clock();
//     time_passed = (double)(end_time - start_time) / CLOCKS_PER_SEC;
//     printf("passed time: %lf", time_passed);
//     printf("\n");

//     return 0;
// }

/**
  n % m
  [(m - 1) - 0]

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int rn = rand() % 10 + 1;
    printf("random number: %d\n", rn);

    return 0;
}