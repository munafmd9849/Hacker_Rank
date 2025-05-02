#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2 || n > 50) {
        printf("Shape Not Possible\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("  ");
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
