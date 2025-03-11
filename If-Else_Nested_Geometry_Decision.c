#include <stdio.h>
void triangle();
void rect();
int main() {
    int sideno ;
    scanf("%d",&sideno);
    if(sideno==3){
        triangle();
    }
    else if(sideno==4){
        rect();
    }
    else if(sideno==0){
        printf("Circle");
    }
    else{
        printf("Invalid Figure");
    }
      
    return 0;
}
void triangle(){
    
    int sl[3];
    int ang[3];
    for(int i=0;i<=2;i++){
        scanf("%d",&sl[i]);
        if(sl[i]<=0){
            printf("Invalid Figure");
            return ;
        }
    }
    for(int i=0;i<=2;i++){
        scanf("%d",&ang[i]);
        if(ang[i]<=0){
            printf("Invalid Figure");
            return ;
        }
    }
    if((ang[0]+ang[1]+ang[2]==180) && sl[0]+sl[1]>sl[2] && sl[0]+sl[2]>sl[1] && sl[1]+sl[2]>sl[0]){
        if(sl[0]==sl[1] && sl[1]==sl[2] && ang[0]==60 && ang[1]==60 && ang[2]==60){
            printf("Equilateral Triangle");
        }
        else if((sl[0]==sl[1] && sl[0]!=sl[2] && ang[0]==ang[1] && ang[0]!=ang[2]) || (sl[1]==sl[2] && sl[1]!=sl[0] &&                  ang[1]==ang[2] && ang[1]!=ang[0]) || (sl[2]==sl[0] && sl[2]!=sl[1] && ang[2]==ang[0] && ang[0]!=ang[1])){
            printf("Isosceles Triangle");
        }
        else if(sl[0]!=sl[1] && sl[1]!=sl[2] && sl[2]!=sl[0] && ang[0]!=ang[1] && ang[1]!=ang[2] && ang[2]!=ang[0]){
            printf("Scalene Triangle");
        }
        else{
            printf("Invalid Figure");
        }
    }
    else{
            printf("Invalid Figure");
        }
}


void rect (){
    int sl[4];
    int ang[4];
    for(int i=0;i<=3;i++){
        scanf("%d",&sl[i]);
        if(sl[i]<=0){
            printf("Invalid Figure");
            return ;
        }
    }
    for(int i=0;i<=3;i++){
        scanf("%d",&ang[i]);
        if(ang[i]<=0){
            printf("Invalid Figure");
            return ;
        }
    }
    if(ang[0]+ang[1]+ang[2]+ang[3]==360){
        
        if((sl[0]==sl[1]) && (sl[1]==sl[2]) && (sl[2]==sl[3]) && (sl[3]==sl[0]) && ang[0]==90 && ang[1]==90 &&                       ang[2]==90 && ang[3]==90 ){
            printf("Square");
        }

        else if((sl[0]==sl[1]) && (sl[1]==sl[2]) && (sl[2]==sl[3]) && (sl[3]==sl[0]) && ang[0]!=90 && ang[1]!=90 &&                     ang[2]!=90 && ang[3]!=90 && (ang[0]==ang[2]) && (ang[1]==ang[3])){
            printf("Rhombus");
        }

        else if((sl[0]==sl[2]) && (sl[1]==sl[3]) && ang[0]==90 && ang[1]==90 && ang[2]==90 && ang[3]==90){
            printf("Rectangle");
        }

        else if((sl[0]==sl[2]) && (sl[1]==sl[3]) && (ang[0]==ang[2]) && (ang[1]==ang[3]) && ang[0]!=90 && ang[1]!=90 &&                 ang[2]!=90 && ang[3]!=90){
            printf("Parallelogram");
        }

        else{
            printf("Invalid Figure");
        }
    }
    else{
            printf("Invalid Figure");
        }
    
}
