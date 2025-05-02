#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0 || n == 1) {
        printf("Shape Not Possible\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        if (i == 1) {
            for (int j = 1; j <= n; j++) {
                printf("*");
                if (j < n) printf(" ");
            }
        }
        else if (i == n) {
            printf("*");
        }
        else {
            printf("*");
            int inner_spaces = 2 * n - 1 - 2 - 2 * (i - 1);
            for (int j = 1; j <= inner_spaces; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        if (i == 1) {
            for (int j = 1; j <= n; j++) {
                printf("*");
                if (j < n) printf(" ");
            }
        }
        else {
            printf("*");
            int inner_spaces = 2 * n - 1 - 2 - 2 * (i - 1);
            for (int j = 1; j <= inner_spaces; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
