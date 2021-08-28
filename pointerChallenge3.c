#include <stdio.h>

//pass in a &float
//print value of pointer you pass into the program 
void square( float * ptr){
    //float squareResult = *ptr;
   *ptr = *ptr * *ptr;
   // printf("%.2f", *ptr);
    
}

int main(){
    float a = 5;
    float b = 3.4;

    square(&a);
    printf("The value of the given number squared is %.2f\n", a);
    square(&b);
    printf("The value of the given number squared is %.2f\n", b);
}