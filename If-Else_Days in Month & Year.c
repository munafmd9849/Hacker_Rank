#include <stdio.h>

int main() {
    
    int month,year,feb;
    
    scanf("%d %d",&month,&year);
    if(month<=0 && year<=0){
        printf("Invalid Month\n");
        printf("Invalid Year");
        return 0;
    }
    if(year>=1){  
        
        if(month>=1 && month<=12){
        
    
            switch(month){
            case 1 :
            case 3 :
            case 5 :
            case 7 :
            case 8 :
            case 10:
            case 12: printf("%d",31);
             break;
                    
            case 2 : 
               if(year%4==0 && !(year%100==0)){
                  feb=29;
                }
                else if(year%100==0 && year%400==0){
                  feb=29;
                }
                else{
                  feb=28;
                }
              printf("%d",feb); break;
            default :printf("%d",30);
            
     }
   }   
           
           else{
               printf("Invalid Month");
           }
    }
      
    else{
        printf("Invalid Year");
    }
    
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}





