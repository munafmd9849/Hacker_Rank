#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    double h[n];
    for(int i=0;i<n;i++){
        if(a[i]==1){
            h[i]=0;
            continue;
        }
        else if(a[i]==-1){
            h[i]=-1;
            continue;
        }
        else{
            
            for(int j=i+1;j<n;j++){
                if(a[j]==-1){
                    h[i]=-1;
                    break;
                }
                else if(a[j]==0){
                    count=count+1;
                }
                else if(a[j]==2){
                    count=count+0.5;
                }
                else if(a[j]==1){
                    count=count+1;
                    break;
                }
            }
            if(flag){
                continue;
            }
            else if()
        }
            
    }
    
