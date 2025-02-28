#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>=1){
            if(!(n>10 && n%2==0) && !(n>15 && n%3==0) && n%7!=0){
                printf("The verdict for the number %d is: NORMAL",n);
            }
            else if((n>10 && n%2==0) && !(n>15 && n%3==0) && n%7!=0){
                 printf("The verdict for the number %d is: MAGICAL",n);

            }
            else if(n%7==0 && !(n>10 && n%2==0) && !(n>15 && n%3==0)){
                 printf("The verdict for the number %d is: MAGICAL",n);

            }
            else if(n%7!=0 && !(n>10 && n%2==0) && (n>15 && n%3==0)){
                 printf("The verdict for the number %d is: MAGICAL",n);

            }
            else if((n>15 && n%3==0) && n%7==0 && !(n>10 && n%2==0)){
                 printf("The verdict for the number %d is: MIRACULOUS",n);

            }
            else if((n>10 && n%2==0) && n%7==0 && !(n>15 && n%3==0)){
                 printf("The verdict for the number %d is: MIRACULOUS",n);

            }
            else if((n>10 && n%2==0) && (n>15 && n%3==0) && n%7!=0){
                 printf("The verdict for the number %d is: MIRACULOUS",n);

            }
            else if(n>15 && n%2==0 && n%3==0 && n%7==0){
                printf("The verdict for the number %d is: SUPERNATURAL",n);
            }      
    }
    else{
        printf("The verdict for the number %d is: INVALID",n);
    }
    
    

    return 0;
}
