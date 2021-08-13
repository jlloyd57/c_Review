#include<stdio.h>

/*
Return_type Function_name(Parameters- seperated by commas)
{
    statements
}

Function prototypes - like defining a function but you don't write it, used so you can call it in the main and then actaully write the function under the main
*/
//function prototype examples
double Average(double data_vlaues[], size_t);
double Sum(double *x, size_t n);


void printMessage(){ //void - returns nothing 
    printf("hi\n");
}

void multiply(int x, int y){
    int result = x * y;
    printf("result is %d\n", result);
}
int addReturn(int a, int b){
    int sum = a + b;
    return sum;
}
int main(){
    printMessage(); // call the function in the main 
    int sum = 0;
    sum = addReturn(5,6); //pass in arguments for x and y 
    printf("sum is %d\n", sum);
    multiply(7,3);
}

//definitions/implementations for Average(), Sum(), etc. ..

//function declaration is the function header, function def is the actual code/implementation 