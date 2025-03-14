#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for(int i=5;i<=100;i=i+5){
        if(i%3==0){
            printf("%d\n",i);
        }
    }
    
    return 0;
}
