#include <stdio.h>

int main() {
    int n;
    int i;
    int temp;
    scanf("%d",&n);
    scanf("%d",&i);
    temp=1<<i;
    temp=~temp;
    n=n&temp;
    printf("%d",n);
    
    
    
    
    return 0;
}
