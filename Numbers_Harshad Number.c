#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int summ(int);
int main() {
    int n;
    scanf("%d",&n);
    int sum=summ(n);
    if(n%sum==0){
        printf("%d is a harshad number",n);
    }
    else{
        printf("%d is not a harshad number",n);
    }
    return 0;
}
int summ(int n){
    int sum=0,num;
    while(n>0){
        num=n%10;
        sum+=num;
        n/=10;
    }
    return sum;
}
