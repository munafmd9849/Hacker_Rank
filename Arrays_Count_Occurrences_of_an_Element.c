#include <stdio.h>

int main() {

    int n,target,count=0;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    scanf("%d",&target);
    
    
    
    int i;
    for(i=0;i<=n-1;i++){
        if(target==a[i]){
            break;
        }
    }
    if(i>n-1){
        printf("0");
        return 0;
    }
    
    for(int i=0;i<=n-1;i++){
        if(target==a[i]){
            count++;
        }
    }
    printf("%d",count);
    
    

    return 0;
}
