#include <stdio.h>
#include <math.h>
double roota(int a, int b,double sqr);
double rootb(int a, int b,double sqr);
int main() {
    double a;
    int b,c;
    scanf("%lf %d %d",&a,&b,&c);
    double D=(b*b)-(4*a*c);
    double sqr=sqrt(D);
    double root1,root2;
    if(D>0){
        root1= roota(a,b,sqr);
        root2=rootb(a,b,sqr);
        printf("Roots: %.2lf, %.2lf\n",root1,root2);
        printf("Type: Real and Distinct\n");
    }
    else if(D==0){
        root1=roota(a,b,sqr);
        root2=rootb(a,b,sqr);
        printf("Roots: %.2lf, %.2lf\n",root1,root2);
        printf("Type: Real and Equal");
    }
    else{
        sqr=sqrt(-1*D);
        double real=(-b)/(2.0*a);
        double img=sqr/(2.0*a);
        printf("Roots: %.2lf + %.2lfi, %.2lf - %.2lfi\n",real,img,real,img);
        printf("Type: Complex\n");
    }
    return 0;
}
double roota(int a, int b,double sqr){
    double root1=((-b) + sqr)/(2*a) ;
    return root1;
}
double rootb(int a, int b,double sqr){
    double root2=((-b) - sqr)/(2*a) ;
    return root2;
}
