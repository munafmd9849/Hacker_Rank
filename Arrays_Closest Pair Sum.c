#include <stdio.h>
#include <limits.h>

int main() {
    int n,key;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    int diff=0;
    int mindiff=INT_MAX;
    int first,sec;
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(a[i]+a[j]==key){
                printf("%d %d",a[i],a[j]);
                return 0;
            }
            else if(a[i]+a[j]>key){
                diff=(a[i]+a[j])-key;
            }
            else{
                diff=key-(a[i]+a[j]);
            }
            if(diff<mindiff){
                mindiff=diff;
                first=a[i];
                sec=a[j];
            }
        }
    }
    printf("%d %d",first,sec);
    return 0;
}
