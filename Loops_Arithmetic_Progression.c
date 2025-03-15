#include <stdio.h>

int main() {
    int n,a,d;
    scanf("%d\n %d %d",&n,&a,&d);
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a+d;
    }
        
    return 0;
}
