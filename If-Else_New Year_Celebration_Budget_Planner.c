#include <stdio.h>

int main() {

   int budget,guest,food,decoration,music,extra;
   int total; 
    
     scanf("%d",&budget);
     scanf("%d",&guest);
     scanf("%d",&food);
     scanf("%d",&decoration);
     scanf("%d",&music);
     scanf("%d",&extra);
    
 
    
    total=guest*food+decoration+music+extra;
    
    if(budget >= total && (guest>5 && guest<=50) && ((decoration < budget*0.3) || (guest*food < budget*0.5) ) && (guest<=25 || music>0) ){
        printf("Celebration Approved");
    }
    else{
        printf("Celebration Denied");
    }
    
    
    
    
    
    return 0;
}
