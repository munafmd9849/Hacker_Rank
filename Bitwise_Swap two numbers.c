#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    
    
    printf("%d\n%d",a,b);
    
    
    return 0;
}
