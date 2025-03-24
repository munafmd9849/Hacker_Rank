#include <stdio.h>

void removeDuplicates(int arr[], int *n){
    int k=1;
	for(int i=1;i<*n;i++){
      if(arr[i]!=arr[i-1]){
          arr[k]=arr[i];
          k++; 
      }
    }
        *n=k;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    removeDuplicates(arr, &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n%d\n", n); // Print new size

    return 0;
}
