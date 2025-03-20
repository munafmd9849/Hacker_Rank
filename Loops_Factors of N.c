#include <stdio.h>

int main()
{
    int num;
    
    scanf("%d",&num);
    
    int flag=1;
    printf("%d", num);
    for (int i=num-1; i>=1;--i){
        
        if(num%i==0){
            if(flag==0){
            printf(" %d",i);
                flag=1;
            }
            else{
                flag=0;
            }
        }
        
    }
    printf(".");
    

    return 0;
}
