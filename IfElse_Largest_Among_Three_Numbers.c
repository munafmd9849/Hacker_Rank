#include <stdio.h>

int main() {

     int a;
    int b;
    int c;
    int d;
    
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   if (a>b){
       d=a;
   }
   if(b>a){
       
       d=b;
   }
   if(c>d){
       
       d=c;
   }
    printf("The largest number is : %d",d);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
