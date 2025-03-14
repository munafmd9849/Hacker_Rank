#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>=2){ 
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;++j){
                if(i==j ||j==1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
             printf("\n");
        }
        for(int i=1;i<=n-1;i++){
            for(int j=1;j<=n;++j){
                if(j==n-i ||j==1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    else{
        printf("Shape Not Possible");
    }
    return 0;
}
