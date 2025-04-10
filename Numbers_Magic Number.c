#include <stdio.h>
int check(int);
int main() {

    int n;
    scanf("%d",&n);
    int res=check(n);
    if(res==1){
        printf("%d is a magic number",n);
    }
    else{
        printf("%d is not a magic number",n);
    }

    
    return 0;
}
int check(int n){
    int sum=0;
    while(n>0){
        int num=n%10;
        sum+=num;
        n=n/10;
    }
    if(sum>9){
        return check(sum);
    }
    else{
        return sum;
    }
    
}

