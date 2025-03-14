#include <stdio.h>

int main() {
    double x;
    int n;
    scanf("%lf %d",&x,&n);
    
    double amount=x;
    double minamount=x;
    for(int i=1;i<=n;i++){

       if (amount<(0.4*x)) {
                printf("Stopped early after %d days: %.2lf\n",(i-1),amount);
                printf("Minimum amount held by Bhaskar: %.2lf\n",amount);
                printf("Better Luck Next Time!");
                return 0;
        }
        if(i%2==0 && i%3==0){
            amount+=0.70*amount;
            i=i+6;
            continue;
        }
        else if(i%2==0){
            amount-=0.125*amount;
        }
        else if(i%3==0){
            amount-=0.2*amount;
        }
        else{
            amount-=amount*0.1;
        }
        if(amount<minamount){
            minamount=amount;
        }
    }
    
    printf("After %d days: %.2lf\n", n,amount);
    printf("Minimum amount held by Bhaskar: %.2lf\n", minamount);
    if(amount>0.7*x){
      printf("Lucky Bhaskar");
    }
    else{
    printf("Better Luck Next Time!");
      }
    return 0;
}
