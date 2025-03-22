#include <stdio.h>

void leftRotateByOne(int arr[], int n) {
    int first=arr[0];
    for(int i=0;i<=n-2;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    leftRotateByOne(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
