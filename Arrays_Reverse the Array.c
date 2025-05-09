#include <stdio.h>

void reverseArray(int arr[], int n) {
  int left=0,right=n-1;
    for(int i=0;i<n/2;i++){
       int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        right--;left++;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
