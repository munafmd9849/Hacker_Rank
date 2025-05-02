#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Check for invalid input
    if (n <= 1 || n > 50) {
        printf("Shape Not Possible\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
