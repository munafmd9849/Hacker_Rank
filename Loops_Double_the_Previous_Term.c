#include <stdio.h>

int main() {

    int n;
    int m=1;
    scanf("%d",&n);
    if(n<=0 || n>35){
        return 0;
    }
        printf("<");
    for(int i=1;i<=n;++i){
        if(i==n)
            printf("%d>",m);
        else
            printf("%d ",m);
        
        m*=2;
    }
    return 0;
}
