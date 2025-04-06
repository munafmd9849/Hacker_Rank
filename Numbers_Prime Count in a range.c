#include <stdio.h>

int main() {
    int L,R,count=0;
    scanf("%d %d",&L,&R);
    for(int i=(L<2?2:L);i<=R;i++){
        int prime=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime){
            count++;
            printf("%d ",i);
        }
    }

    if(count){
        printf("\n");
        printf("%d",count);
    }
    else{
        printf("%d",count);
    }
    return 0;
}
