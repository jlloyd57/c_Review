#include<stdio.h>
//pointers can only point to specific variable types they're associated with
//pointers of type "int" can only point to variables of type int
//pointer has a value to an address, provide direct memory access 

//int *pnumber; //can store address of any variable of type int 
//%p is the format specifier for pointers 
//want to always initialize a variable when you declare it 
int *pnum=NULL; //equivalent of zero for a pointer- it does not point to any location in memory 
//initiliaze your variable with the address of a variable 
int number =99;
int *pnumber = &number;