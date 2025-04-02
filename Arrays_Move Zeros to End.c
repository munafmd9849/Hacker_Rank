#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
    for(int i=n-1;i>=0;i--){
        if(arr[i]==0){
            for(int j=i;j<=n-2;j++){
                arr[j]=arr[j+1];
            }
            arr[n-1]=0;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    moveZerosToEnd(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
