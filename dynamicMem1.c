#include<stdio.h>
#include<stdlib.h> 

//if you want to store 25 integers using malloc does the following
int main(){
//returns a void pointer so you have to cast it to an int
int *pNumber = (int*)malloc(25*sizeof(int)); 
//good idea to check for NULL before you use a malloc
if(!pNumber) {//aka is it pointing to NULL - if it is null means you can't allocate memory (abort sos)
    printf("aborting program");
    return 0; 
}
/*release memory you allocated dynamically when its not required- do the following:
/free() function has a formal paramter of type void*- you can pass a pointer of any type as the argument
as long as pNumber contains the address that was returned when the memory was allocated, the entire block of memory will be freed for further use */
free(pNumber);
pNumber = NULL;//should always set it to null to signify its not pointing to anyone

//calloc- intializes all ints to 0 to start
int *pCalloc = (int*)calloc(75, sizeof(int));
//realloc - enables you to reuse or extend memory that you previously allocated using malloc() or calloc()
}