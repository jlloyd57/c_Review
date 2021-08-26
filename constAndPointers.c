#include <stdio.h>

//can use const keyword when you declare a keyword a pointer to indicate that the value pointed to must not be changed 

int main(){
long value = 999L;
const long *pvalue = &value; //defines what the pointer points to, to be a constant
// *pvalue = 888L; cannot do this - error
//can change the long value 
value = 777L; //value pointed to change but did not use the pointer to make the change 
long number = 888L;
pvalue = &number; //changing what it points to 
//cannot use the pointer to change the value that is stored 

//want to ensure that the address stored in a pointer cannot change 
int count = 43;
int *const pcount = &count; //defines constant pointer
//assures the pointer will always point to the same thing, address stored must not be changed 
int item 34;
*pcount = 345;
/*pcount = &item; //throws an error- attempt to change a const pointer 
/all about where you place the const keyword
const int * .... value cannot be changed
int *const pointer address cannot change */
}