#include <stdio.h>

/*a pointer of type void* can contain the address of a data item of any type 
void pointer does not know what kind of type of object it is pointing to so it cannot be dereferenced directly- gotta cast it */

int main(){
    int i =10;
    float f = 2.34;
    char ch = 'k';

    void *vptr;

    vptr = &i;
    printf("value of i = %d\n", *(int*)vptr); //casting the pointer to the right type and then dereferncing it to print the value

    vptr = &f;
    printf("value of f = %.2f\n", *(float*)vptr);

    vptr = &ch;
    printf("value of ch = %c\n", *(char*)vptr);
}
