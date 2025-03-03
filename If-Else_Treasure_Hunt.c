#include <stdio.h>
void left();
void middle();
void right();

int main() {

    int path;
    
    scanf("%d",&path);
    
    if(path==1){
        left();
    }
    else if(path==2){
        middle();
    }
    else if(path==3){
        right();
    }
    
    return 0;
}

// left case
    
void left(){
    int swamp;
    int bridge;
    int chest;
    printf("Player chooses the Left path.\n");
    
    scanf("%d",&swamp);
    
    if(swamp==1){
        printf("Poor choice, Game Over!\n");
    }
    else if(swamp==2){
        printf("Player found a bridge.\n");
        
        scanf("%d",&bridge);
        
        if(bridge==1){
            
            printf("Player crosses the bridge safely.\n");
            
            scanf("%d",&chest);
            
            if(chest==1){
                printf("All that glitters is not gold, Game Over!\n");
            }
            else if(chest==2){
                printf("All your efforts were for nothing, Game Over!\n");
            }
            else if(chest==3){
                printf("Congratulations!! You won the treasure.\n");
            }
        }
        else if(bridge==2){
            printf("Poor luck, Game Over!\n");
        }
        
    }
}

// rigth case

void middle(){
    printf("Player chooses the Middle path.\n");
    int puzzle;
    int chest;
    scanf("%d",&puzzle);
    if(puzzle==582){
        printf("Player solved the puzzle.\n");
        scanf("%d",&chest);
            
            if(chest==1){
                printf("All that glitters is not gold, Game Over!\n");
            }
            else if(chest==2){
                printf("All your efforts were for nothing, Game Over!\n");
            }
            else if(chest==3){
                printf("Congratulations!! You won the treasure.\n");
            }
        
    }
    else{
        printf("Foolish player, Game Over!\n");
    }
}

// right case

void right(){
    printf("Player chooses the Right path.\n");
    int puzzle;
    int chest;
    scanf("%d",&puzzle);
    if(puzzle==30){
        printf("Player solved the puzzle.\n");
        scanf("%d",&chest);
            
            if(chest==1){
                printf("All that glitters is not gold, Game Over!\n");
            }
            else if(chest==2){
                printf("All your efforts were for nothing, Game Over!\n");
            }
            else if(chest==3){
                printf("Congratulations!! You won the treasure.\n");
            }
        
    }
    else{
        printf("Foolish player, Game Over!\n");
    }
    
}
