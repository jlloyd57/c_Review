#include <stdio.h>

//pass by value- when a funct copies the actual value of an arg into the formal paramter of the funct
//  changes made to the paramtere inside the funct have no effect on the arg 
//pass by value example

void swap(int x, int y){
    int temp;

    temp = x; //saves value of x
    x=y; //sets x = y value
    y=temp; //sets y = x value now
}

void swapUsingPtrs(int *x, int *y){
    int temp;

    temp = *x; //saves value of x and derefenced 
    *x=*y; //sets x = y value (dereferenced)
    *y=temp; //sets y = x value now (dereferenced)
}

int main(){
int a=100;
int b=200;

printf("Before swap, value of a is %d and the value of b is %d\n", a,b);
//values never change because we pass by value 
swap(a,b);
printf("After swap, value of a is %d and the value of b is %d\n", a,b);

printf("\n");

printf("Before swap, value of a is %d and the value of b is %d\n", a,b);
//values never change because we pass by value 
swapUsingPtrs(&a,&b);
printf("After swap, value of a is %d and the value of b is %d\n", a,b);





}