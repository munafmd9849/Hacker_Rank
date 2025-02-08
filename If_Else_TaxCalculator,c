#include <stdio.h>

int main() {

    float income;
    float rate;
    float tax;
    char flag;
    scanf("%f",&income);
    if(income>=0){
        flag=0;
        if(income<=250000){
            rate=0;
            tax=income*rate;
            
        }
        else if(income>250000 && income<=500000){
            rate=5;
            tax=(income-250000)*rate/100;
             
        }
        else if(income>500000 && income<=1000000){
            rate=5;
            tax=250000*rate/100;
            rate=20;
            tax+=(income-500000)*rate/100;
           
        }
        else{
            rate=5;
            tax=250000*rate/100;
            rate=20;
            tax+=500000*rate/100;
            rate=30;
            tax+=(income-1000000)*rate/100;
            
        }

    }
    else{
            flag=1;
        printf("INVALID");
    }
    
    if(flag==0){
        printf("%.2f",tax);
    }
    
    return 0;
}
