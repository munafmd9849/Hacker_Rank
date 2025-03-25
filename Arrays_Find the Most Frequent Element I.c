#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   int f[n];
    for(int i=0;i<=n-1;i++){
       f[i]=0;
    }
    
    for(int i=0; i<=n-1;i++){
        if(f[i]!=-1){
         int count=1;
            for(int j=i+1;j<=n-1;j++){
                if(a[i]==a[j]){
                    count++;
                    f[j]=-1;
                }
            }
          f[i]=count;
        } 
    }
    int max=-1;
    int index=0;
    for(int i=0;i<=n-1;++i ){
        if(f[i]>max){
            index=i;
            max=f[i];
        }
    }
    printf("%d",a[index]);
    

    
    
    return 0;
}
