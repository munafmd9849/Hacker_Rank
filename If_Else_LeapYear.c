#include <stdio.h>

int main() {
    int year;
    scanf("%d",&year);
    if(year>=1){
        
        if(year%4==0 && !(year%100==0)){
            printf("Yes, %d is a leap year.",year);
        }
        
        else if(year%100==0 && year%400==0){
            printf("Yes, %d is a leap year.",year);
        }
        
        else{
            printf("No, %d is not a leap year.",year);
        }
    }
    else{
        printf("The given year %d is Invalid year.",year);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
