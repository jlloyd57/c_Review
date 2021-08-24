#include <stdio.h>

int main(){

    int number = 5;
    int *ptr = NULL;
    ptr = &number;

    printf("the address of the pointer: %p\n",(void*)&ptr);
    printf("the value of the pointer: %p\n", ptr); //should be the address it points to so it should be the same as below
    printf("the address of number: %p\n",&number);//should be equal to one above it
    printf("the value the pointer points to: %d\n",*ptr);

}