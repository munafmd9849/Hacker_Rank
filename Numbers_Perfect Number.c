#include <stdio.h>

int main() {

   int  n;
    scanf("%d",&n);
    int count=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            count+=i;
        }
    }
    if(count==n){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
