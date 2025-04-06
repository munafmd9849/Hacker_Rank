#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int count=0;
    int sum=0;
    int num=2;
    while(count<n){
        int prime=1;
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                num++;
                prime=0;
                break;
            }
        }
        if(prime!=0){
            count++;
            sum+=num;
            num++;
        }
        else{
            continue;
        }
    }
    printf("%d",sum);
    return 0;
}
