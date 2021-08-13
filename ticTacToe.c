#include<stdio.h>

void checkForWin();
void drawBoard();
void markBoard();

char matrix[3][3] = {
    {'1','2','3'}, 
    {'4', '5','6'},
    {'7','8','9'}
};

int main(){
    drawBoard();
   
}

void drawBoard(){
     for(int x =0; x <3; x++){
        for (int y =0; y< 3; y++){
            printf(" %c ",matrix[x][y]);
            if(y<2)
                printf("|");
        }
        
        if(x < 2)
            printf("\n---|---|---\n");
     }
}
