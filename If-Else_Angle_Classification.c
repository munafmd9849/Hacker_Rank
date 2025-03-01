#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void output(int);

int main() {
    
    signed int angle;
    
    scanf("%d",&angle);
    
    if(angle==0){
        printf("Acute Angle");
        return 0;
    }
    else if(angle>360){
            angle-=360*(angle/360);
            output(angle);
    }
    else{
            output(angle);
    }
    return 0;
}
    
    
     void output(int x)
     {
         if(x>0 && x<90){
            printf("Acute Angle");
        }
        else if(x==90){
            printf("Right Angle");
        }
        else if(x>90 && x<180){
            printf("Obtuse Angle");
        }
        else if(x==180){
            printf("Straight Angle");
        }
        else if(x>180 && x<360){
            printf("Reflex Angle");
        }
        else if(x==360 || x==0){
            printf("Full Rotation");
        }
     }
    
    
