#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n==1){
        printf("1");
        return 0;
    }
    printf("%d -> ",n);
    while(n>=1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }
        if(n==1){
            printf("1");
            return 0;
        }
        printf("%d -> ",n);        
     }

    
    return 0;
}
