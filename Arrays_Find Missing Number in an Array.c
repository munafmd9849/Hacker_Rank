#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n-1];
    for(int i=0;i<n-1;i++){
        
        scanf("%d",&a[i]);
    }
    for(int  i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(a[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d",i);
            break;
        }
    }
    
    return 0;
}
