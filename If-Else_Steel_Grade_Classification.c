#include <stdio.h>

int main() {
    int h,t;
    float c;
    scanf("%d %f %d",&h,&c,&t);
    if(h>50 && c<=0.7 && t>5600){
        printf("The grade of the steel is: 10\n");
        printf("All of the conditions met.");
    }
    else if(h>50 && c<=0.7 && !(t>5600)){
        printf("The grade of the steel is: 9\n");
        printf("Two conditions met.");
    }
    else if(!(h>50) && c<=0.7 && t>5600){
        printf("The grade of the steel is: 8\n");
        printf("Two conditions met.");
    }
    else if(h>50 && !(c<=0.7) && t>5600){
        printf("The grade of the steel is: 7\n");
        printf("Two conditions met.");
    }
    else if(!(h>50) && !(c<=0.7) && !(t>5600)){
        printf("The grade of the steel is: 5\n");
        printf("None of the conditions met.");
        
    }
    else if(!(h>50) && !(c<=0.7) && t>5600){
        printf("The grade of the steel is: 6\n");
        printf("Only one condition met.");
        
    }
    else if(!(h>50) && c<=0.7 && !(t>5600)){
        printf("The grade of the steel is: 6\n");
        printf("Only one condition met.");
        
    }
    else if(h>50 && !(c<=0.7) && !(t>5600)){
        printf("The grade of the steel is: 6\n");
        printf("Only one condition met.");
        
    }
    
    
    return 0;
}
