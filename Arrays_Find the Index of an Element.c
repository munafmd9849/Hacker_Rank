#include <stdio.h>

int main() {

    int n,key;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    int i;
     for( i=0;i<n;i++){
         if(a[i]==key){
             
             break;
         }
     }
    if(i<=n-1){
        printf("%d",i);
    }
    else{
        printf("-1");
    }
         
    
    return 0;
}
