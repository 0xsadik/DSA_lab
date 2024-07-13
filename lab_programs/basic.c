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



#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(0));
    for (int i = 0; i < 5; i++) {
        printf("%d\n", rand());
    }

    return 0;
}