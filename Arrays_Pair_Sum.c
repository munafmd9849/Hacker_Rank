#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    int key;
    scanf("%d",&key);
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(a[i]+a[j]==key){
                printf("%d %d",a[i],a[j]);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}
