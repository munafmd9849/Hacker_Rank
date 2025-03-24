#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    int flag=0;
    for(int i=0;i<=n-2;i++){
        if(arr[i]!=arr[i+1]){
            flag=1;
        }
   }
    if(flag==0){
        return -1;
    }
    else{
        
    int max=arr[0],max2=-1000000000;
    for(int i=1;i<=n-1;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<=n-1;i++){
        if(max==arr[i])
        {continue;}
        else if(max2<arr[i]){
            max2=arr[i];
        }
    }
    
    return max2;
    }

}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}
