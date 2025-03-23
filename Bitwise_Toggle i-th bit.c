#include <stdio.h>

int main() {

    int n,i;
    
    scanf("%d %d",&n,&i);
    int temp=!n;
    int one=1<<i;
    temp=temp|one;
    printf("%d",n^temp);
    
    
    return 0;
}
