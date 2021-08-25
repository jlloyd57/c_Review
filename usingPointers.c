#include <stdio.h>

/* pointer arithmetic
- + operator to add an integer to a pointer or a pointer to an integer (integer is multipled by the number of bytes in the pointed-to type and added to the original address)
- increment a pointer by one (useful to move to next element in an array)
- use the - operator to subtract an integer from a pointer (integer is multiplied by the number of bytes in the pointed-to type and subtracted from orig address)
- decrementing a pointer by one(go back one element in arrays) 
- difference between 2 pointers in the same array displays how far apart the elements are (integer)
- you can subtract an integer from a pointer to get a pointer
- be careful arrays can be incremented out of bounds */
int main(){
int number =0;
int *pnumber = NULL;
number =10;
pnumber = &number;
*pnumber += 25; //increments the value by the number vairable by 25 
printf("%d\n", *pnumber);
printf("----------\n");

long num1=0L;
long num2=0L;
long *pnum = NULL;

pnum = &num1; //get address of num1
*pnum = 2L; // setting num1 = 2L
++num2; //incrementing num2
num2 +=*pnum; // num2 = num2+ num1

pnum = &num2; // get address of num2
++*pnum; //increment num2 indirectly 

printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld\n", num1,num2,*pnum,*pnum+num2);
//we can read values into pointers through scanf
int value =0;
int *pvalue = &value;

printf("input an integer: ");
scanf("%d", pvalue);

printf("you entered %d.\n", value);
//want to check for NULL before you dereference a pointer 
//if(!pvalue)... in some function 
}