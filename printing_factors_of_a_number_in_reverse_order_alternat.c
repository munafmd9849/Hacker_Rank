#include <stdio.h>

int main()
{
    int num;
    
    scanf("%d",&num);
    
    int flag=1;
    
    for (int i=num; i>=1;--i){
        if(num%i==0){
            if(flag==1){
            printf("%d ",i);
                flag=0;
            }
            else{
                flag=1;
            }
        }
        
    }
    printf("\b.");

    return 0;
}
