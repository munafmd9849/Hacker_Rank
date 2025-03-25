#include <stdio.h>
#include <limits.h>
/**
 * Finds the kth smallest element in the array by iteratively finding the next
 * minimum.
 * @param arr: The input array.
 * @param n: The number of elements in the array.
 * @param k: The order of the smallest element to find (1-indexed).
 * @return: The kth smallest element in the array.
 */
int kthSmallest(int arr[], int n, int k) {
    int unique[n];  
    int uniqueSize = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        for (int j = 0; j < uniqueSize; j++) {
            if (unique[j] == arr[i]) {
                isDuplicate = 1;  
                break;
            }
        }

        if (isDuplicate!=1) {
            unique[uniqueSize++] = arr[i];
        }
    }

    int min, ignore;

    for (int j = 1; j <= k; j++) {
        min = INT_MAX;

        for (int i = 0; i < uniqueSize; i++) {
            if (unique[i] < min) {
                min = unique[i];
                ignore = i;
            }
        }

        unique[ignore] = INT_MAX;
    }

    return min;
}


int main() {
  int n, k;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &k);
  printf("%d\n", kthSmallest(arr, n, k));

  return 0;
}
