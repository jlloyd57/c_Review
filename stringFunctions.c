#include <stdio.h>
#include <string.h>

int main() { 
/*common string functions

getting string length - strlen
copying one character string to another- strcpy() & strncpy()
combining two character strings together (concatenation)- strcat() & strncat()
determining if two strings are equal- strcmp() & strncmp()
*/
    //strlen
    char myString[] = "howdy";
    printf("the length of my string is: %d", strlen(myString));
    //strcpy - does not check to make sure the source string actually fits the target
   /* char src[50], dest[50];
    strcpy(src, "this is source");
    strcpy(dest, "this is destination");
   */ //strncpy - safer way to copy strings - takes 3 args- last is the max # of characters to copy
    char src[40];
    char dest[12];
    
    memset(dest, '\0', sizeof(dest)); //memset sets the size of the data inside a destination to null terminators so when you add something it will automatically be there
    strcpy(src,"hello how are you doing");
    strncpy(dest, src, 10); //only copies the first 10 characters into the destination
    
}