#include<stdio.h>

void checkForWin();
void drawBoard();
void markBoard();

char matrix[10] = { '1','2','3', '4', '5','6', '7','8','9'};

int main(){
    drawBoard();
   
}
void checkForWin(){
    int returnValue=0;
    if (matrix[0] == matrix [1] && matrix[1] == matrix[2])
        returnValue = 1;
    else if (matrix[3] == matrix [4] && matrix[4] == matrix[5])
        returnValue = 1;
    else if (matrix[6] == matrix [7] && matrix[7] == matrix[8])
        returnValue = 1;
    else if (matrix[0] == matrix [3] && matrix[3] == matrix[6])
        returnValue = 1;
    else if (matrix[1] == matrix [4] && matrix[4] == matrix[7])
        returnValue = 1;
    else if (matrix[2] == matrix [5] && matrix[5] == matrix[8])
        returnValue = 1;
    else if (matrix[0] == matrix [4] && matrix[4] == matrix[8])
        returnValue = 1;
    else if (matrix[2] == matrix [4] && matrix[4] == matrix[6])
        returnValue = 1;
    else if (matrix[0] != '1' && matrix[1] != '2' && matrix[2] != '3' && matrix[3] != '4' && matrix[4] != '5' && matrix[5] != '6' && matrix[7] != 8 && matrix[8] != '9')
        return 0; // game over & draw 
    else 
        return -1; // in progress
}
void drawBoard(){
  //im just skipping this because its tedious and stupid print functions
}
