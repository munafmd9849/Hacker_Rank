#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    int i;
    for(i=0;i<n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(a[i]==a[j]){
                printf("%d",a[i]);
                return 0;;
            }
        }
    }
        printf("No Repeating Element");
   
    return 0;
}
