#include <stdio.h>

int main() {

    int n0,n1,n2,n3,n4,n5,n6,n7,n8,n9;
    scanf("%d  %d  %d  %d  %d  %d  %d  %d  %d  %d",&n0,&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);
    for(int i=1;i<=3;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        switch(x){
            case 0:n0=(n0+y)%10;
            break;
                
            case 1:n1=(n1+y)%10;
            break;
                
            case 2:n2=(n2+y)%10;
            break;
                
            case 3:n3=(n3+y)%10;
            break;
                
            case 4:n4=(n4+y)%10;
            break;
                
            case 5:n5=(n5+y)%10;
            break;
                
            case 6:n6=(n6+y)%10;
            break;
                
            case 7:n7=(n7+y)%10;
            break;
                
            case 8:n8=(n8+y)%10;
            break;
                
            case 9:n9=(n9+y)%10;
            break;   
        }
        
    }
    printf("%d %d %d %d %d %d %d %d %d %d",n0,n1,n2,n3,n4,n5,n6,n7,n8,n9);
    
    return 0;
}
