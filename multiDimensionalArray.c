#include<stdio.h>

int main(){
    //example of initializing multdimensional array
    int numbers[2][3] = {
        {0,1,2},
        {4,5,6}
    };
    //as with a 1D array it's not required to initialize the whole thing- rest get sent to 0 automatically
    int matrix[4][5] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    }; //last two columns are automatically 0

    //subscripts can be used to initilize 
    int ex[4][3] = {
        [0][0]=1, [1][1]=5, [2][2]=9 };
}