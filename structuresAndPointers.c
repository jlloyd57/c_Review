#include <stdio.h>
#include <stdlib.h>
struct date{
    int month;
    int day;
    int year;
};
struct intPtrs{
    int *p1;
    int *p2;
};
int main(){
    //define a variable to be a pointer to a struct 
    struct date today, *datePtr; //allocate mem
    datePtr=&today; //assigning it an address - datPtr points to the address of today
    /*can indirectly access any of the members of the date structure pointed to by datePtr
    (*datePtr).day = 21; //had to dereference first- sets the day of the date structure pointed to by datePtr to 21 */
    datePtr->month =9; //assign data to it using -> 
    datePtr->day=7;
    datePtr->year = 1999;

    printf("my bday is %i/%i/%i\n", datePtr->month, datePtr->day, datePtr->year);

    struct intPtrs pointers;
    int i1=100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);

}