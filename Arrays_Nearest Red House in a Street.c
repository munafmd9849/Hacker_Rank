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
        double stepf=0;
        if(a[i]==1){
            h[i]=0;
            continue;
        }
        else if(a[i]==-1){
            h[i]=-1;
            continue;
        }
        else if(a[i]==2){
            for(int j=i+1;j<=n-1;j++){
                if(a[j]==1){
                    stepf=0.5;
                    break;
                }
                else if(a[j]==-1){
                    stepf=-1;
                    break;
                }
                else if(a[j]==0 || a[j]==2){
                    stepf=stepf+0.5;
                }
            }
        }
        else if(a[i]==0){
            for(int j=i+1;j<=n-1;j++){
                if(a[j]==1){
                    stepf=1;
                    break;
                }
                else if(a[j]==-1){
                    stepf=-1;
                    break;
                }
                else if(a[j]==0){
                    stepf=stepf+1;
                }
                else if(a[j]==2){
                    stepf=stepf+0.5;
                }
            }
        }
        h[i]=stepf;
    }

    double g[n];
    for(int i=n-1;i>=0;i--){
        double stepf=0;
        if(a[i]==1){
            g[i]=0;
            continue;
        }
        else if(a[i]==-1){
            g[i]=-1;
            continue;
        }
        else if(a[i]==2){
            for(int j=i-1;j>=0;j--){
                if(a[j]==1){
                    stepf=0.5;
                    break;
                }
                else if(a[j]==-1){
                    stepf=-1;
                    break;
                }
                else if(a[j]==0 || a[j]==2){
                    stepf=stepf+0.5;
                }
            }
        }
        else if(a[i]==0){
            for(int j=i-1;j>=0;j--){
                if(a[j]==1){
                    stepf=1;
                    break;
                }
                else if(a[j]==-1){
                    stepf=-1;
                    break;
                }
                else if(a[j]==0){
                    stepf=stepf+1;
                }
                else if(a[j]==2){
                    stepf=stepf+0.5;
                }
            }
        }
        g[i]=stepf;
    }
    for(int i=0;i<=n-2;i++){
        if(h[i]==-1 && g[i]!=-1)
        printf("%.1f ",h[i]);
    }

    return 0;
}
    
