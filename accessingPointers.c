#include <stdio.h>



int main(){
    int number =15;
    int *pointer = &number;
    int result =0;
//use this in an expressoin to calculate new value for result
    result = *pointer + 5;
    printf("%d\n", result);
    printf("----------\n");
    //how to derefence a pointer and get its value 
    int count=10, x;
    int *int_ptr;

    int_ptr = &count;
    x = *int_ptr;

    printf("count = %i, x= %i\n", count,x);
    printf("displaying a pointers value\n");
     printf("----------\n");
    int num =0;
    int *pnumber = NULL;

    num=10;
    pnumber= &num;
    printf("pnumber's address: %p\n", (void*)&pnumber); //outputs the address
    printf("pnumber's size: %zd bytes\n", sizeof(pnumber));
    printf("pnumber value(address): %p\n", pnumber);//output the value (an address)
    printf("the value pnumber points to: %d\n", *pnumber);//value at the address the pointer points to 
    printf("the address of num: %p\n", &num); //same as output address of pnumber 

    return 0;
}