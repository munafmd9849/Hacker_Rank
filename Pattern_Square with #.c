#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 3 || n > 50) {
        printf("Shape Not Possible\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            for (int j = 0; j < n; j++) {
                printf("*");
            }
        } else {
            printf("*");
            for (int j = 0; j < n - 2; j++) {
                printf("#");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
