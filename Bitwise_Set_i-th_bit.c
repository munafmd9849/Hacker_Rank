#include <stdio.h>

int main() {
    int n;
    int i;
    int temp;
    scanf("%d",&n);
    scanf("%d",&i);
    temp=n>>i;
    if(temp&1==1){
        printf("%d",n);
    }
    else{
        temp=temp|1;
        temp=temp<<i;
        temp=temp|n;
        printf("%d",temp);
    }
    
    return 0;
}
