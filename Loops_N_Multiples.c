#include <stdio.h>

int main() {

    int num1,num2,temp;
    scanf("%d %d",&num1,&num2);
    temp=num2;
    for(int i=1;i<=num1;i++){
        printf("%d ",temp);
         temp=temp+num2;
    }
    return 0;
}
