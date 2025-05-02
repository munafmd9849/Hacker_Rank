#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int max = n;
    printf("%d", n);

    if (n < 1) {
        printf(" -> 1");
        max = 1;
        printf("\nMax Number: %d\n", max);
        return 0;
    }

    while (n != 1) {
        int new_n;
        if (n % 3 == 0) {
            new_n = n / 3;
        } else if (n % 5 == 0) {
            new_n = n - 5;
        } else {
            new_n = n * 5;
        }

        printf(" -> %d", new_n);

        if (new_n > max) {
            max = new_n;
        }

        if (new_n < 1) {
            new_n = 1;
            printf(" -> %d", new_n);
            if (new_n > max) {
                max = new_n;
            }
            break;
        }

        n = new_n;
    }

    printf("\nMax Number: %d\n", max);

    return 0;
}
