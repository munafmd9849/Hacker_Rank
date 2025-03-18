#include <stdio.h>

int main() {

    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=size-1;++i){
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(int i=0;i<=size-1;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
//     for(int i=0;i<=size-1;i++){
        
//     }
    printf("%d %d",max,min);
    
    return 0;
}
