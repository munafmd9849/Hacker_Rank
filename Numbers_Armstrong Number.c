#include <stdio.h>
#include<math.h>
int countdigit(int);
int sum(int,int);
int main(){
    int n;
    scanf("%d",&n);
    int summ;
    int dig=countdigit(n);
    summ=sum(n,dig);
    
    if(summ==n){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
int countdigit(int n){
    int dig=0;
    while(n>0){
    n=n/10;
    dig++;
    }
    return dig;
    
}
int sum(int n,int dig){
    int sum=0,num;
    while(n>0){
        num=n%10;
        sum+=pow(num,dig);
        n=n/10;
    }
    return sum;
}
