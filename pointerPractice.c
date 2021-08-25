#include <stdio.h>

int main(){
    int num1 = 5;
    int *pnum1 = NULL;
    pnum1= &num1;
    *pnum1 += 5;

    printf("%d\n", *pnum1); //prints value 
    printf("%p\n", pnum1); //print address
    printf("%p\n", (void*)&pnum1); //address of the pointer itself 
}