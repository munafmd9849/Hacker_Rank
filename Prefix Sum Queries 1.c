#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,q;
    scanf("%d %d",&n,&q);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int qr[q][2];
    for(int i=0;i<q;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&qr[i][j]);
        }
    }
    long pfsum[n];
    long sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        pfsum[i]=sum;
    }
    for(int i=0;i<q;i++){
        int l=qr[i][0],r=qr[i][1];
        if(l==0){
            printf("%ld\n",pfsum[r]);
        }
        else{
            printf("%ld\n",pfsum[r]-pfsum[l-1]);
        }
    }
    return 0;
}
