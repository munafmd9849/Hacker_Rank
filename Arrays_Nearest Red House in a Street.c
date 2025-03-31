#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define INF 1000000.0

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    double dist[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        dist[i] = INF;
    }

    // Left to Right pass
    double nearest = INF;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            nearest = 0.0;
        } else if (arr[i] == -1) {
            nearest = INF;
        } else if (nearest < INF) {
            nearest += (arr[i] == 2) ? 0.5 : 1.0;
        }
        dist[i] = nearest;
    }

    // Right to Left pass
    nearest = INF;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == 1) {
            nearest = 0.0;
        } else if (arr[i] == -1) {
            nearest = INF;
        } else if (nearest < INF) {
            nearest += (arr[i] == 2) ? 0.5 : 1.0;
        }
        if (dist[i] > nearest) {
            dist[i] = nearest;
        }
    }

    // Printing the results
    for (int i = 0; i < n; i++) {
        printf("%.1f ", (dist[i] == INF) ? -1.0 : dist[i]);
    }
    printf("\n");

    return 0;
}
