#include "stdio.h"
//1task
int main() {
    int n = 3, m = 4;
    int a[3][4] = {
        {12, 3, 4, 0},
        {-5, 6, 7, 8},
        {-9, 10, 11, 12}
    };

    int sum = 0;
    int found_negative = 0;

    printf("Output: ");
    for (int i = 0; i < n && !found_negative; i++) {
        for (int j = 0; j < m && !found_negative; j++) {
            if (a[i][j] < 0) {
                found_negative = 1;
                break;
            }
            if (sum == 0) {
                printf("%d", a[i][j]);
            } else {
                printf("+%d", a[i][j]);
            }
            sum += a[i][j];
        }
    }
    printf("=%d\n", sum);
}

#include "stdio.h"
//2task
int main() {
    int a[3][4]={
        {1, 2, 3, 4},
        {-5, 6, 7, 8},
        {-9, 10, 11 ,12},
    };

    int LNR = 0;
    int LNC = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] < 0) {
                LNR = i;
                LNC= j;
            }
        }
    }

    printf("Sonlar yig'indisi: \n");
    int n =0;
    for(int i = LNR; i < 3; i++) {
        for(int j = i == LNR ? LNC + 1 : 0; j < 4; j++) {
           n += a[i][j];
            printf("%d", a[i][j]);
            char *sign = i+j == 6 ? "=" : "+";
            printf("%s", sign);
        }
    }
    printf("%d", n);
}

// #include "stdio.h"
////3task
// int main() {
//     int n = 3;
//     int a[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     for (int i = 0; i < n; i++) {
//         int temp = a[i][0];
//         a[i][0] = a[0][i];
//         a[0][i] = temp;
//     }
//
//     printf("Output:\n");
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d", a[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include "stdio.h"
////4task
// int main() {
//
//     int a[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9},
// };
//
//     for (int i = 0; i <3; i++) {
//         for (int j = 0; j <= 2; j++) {
//             printf("%d " ,a[j][i]);
//         }
//         printf("\n");
//     }
// }

// #include "stdio.h"
////5task
// int main() {
//     int a[2][3] ={ {-2, -6, -3}, {4, 7, 9}, };
//
//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 3; j++) {
//             if (a[i][j] > 0) {
//                 printf("Musbat: %d ", a[i][j]);
//             } else
//                 printf("Manfiy; %d ", a[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include "stdio.h"
////6task
// int main() {
//     int n = 3;
//     int a[3][3] = {
//         {1, 2, 1},
//         {8, 2, 4},
//         {5, 8, 7}
//     };
//
//     int b[11] = {0};
//
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (a[i][j] >= 0 && a[i][j] <= 10) {
//                 b[a[i][j]]++;
//             }
//         }
//     }
//
//     printf("Output: ");
//     for (int i = 0; i <= 10; i++) {
//         if (b[i] >= 2) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");
// }

// #include <stdio.h>
////7task
// int main() {
//     int n = 3;
//     int a[3][3] = {
//         {1, 2, 1},
//         {8, 2, 4},
//         {5, 6, 7}
//     };
//
//     int b[11] = {0};
//
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (a[i][j] >= 0 && a[i][j] <= 10) {
//                 b[a[i][j]]++;
//             }
//         }
//     }
//
//     printf("Output: ");
//     for (int i = 0; i <= 10; i++) {
//         if (b[i] == 1) {
//             printf("%d", i);
//         }
//     }
//     printf("\n");
// }
