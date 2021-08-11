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
int main(){
    printMessage(); // call the function in the main 
}

//definitions/implementations for Average(), Sum(), etc. ..