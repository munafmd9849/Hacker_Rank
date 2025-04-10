#include <stdio.h>
#include <stdlib.h>

void sortArray(int a[], int n) {
    int count7=0,count8=0,count9=0;
    for(int i=0;i<n;i++){
        if(a[i]==7){
            count7++;
        }
        else if(a[i]==8){
            count8++;
        }
        else{
            count9++;
        }
    }
    int k=0;
    int i=1;
    while(i<=count7){
        a[k++]=7;
        i++;
    }
    i=1;
    while(i<=count8){
        a[k++]=8;
        i++;
    }
    i=1;
    while(i<=count9){
        a[k++]=9;
        i++;
    }
}




int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sortArray(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}
