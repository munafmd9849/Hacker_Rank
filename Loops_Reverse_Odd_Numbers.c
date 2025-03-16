#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=2*n;i>=1;i--){
        if(i==1){
            printf("%d.",i);
            break;
        }
        if(i%2!=0)
        printf("%d ",i);
    }
    return 0;
}
