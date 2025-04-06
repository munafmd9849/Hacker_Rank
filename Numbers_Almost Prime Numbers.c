#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int prime_factors[N + 1];
    for (int i = 0; i <= N; i++) {
        prime_factors[i] = 0;
    }

    // For every prime i, increment factor count for all multiples of i
    for (int i = 2; i <= N; i++) {
        if (prime_factors[i] == 0) {  // i is prime
            for (int j = i; j <= N; j += i) {
                int num = j;
                while (num % i == 0) {
                    prime_factors[j]++;
                    num /= i;
                }
            }
        }
    }

    int count = 0;
    for (int i = 2; i <= N; i++) {
        if (prime_factors[i] == 2) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
