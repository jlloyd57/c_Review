#include <stdio.h>

// #define statements can be used for character and string constants 

#define TEE 'T'
#define OOPS "I did it again"

int main() { 
    
    printf("this is a string\n");
    printf("this is on\ntwo lines\n");
  //  printf("for\" you write \\\"."); //this terminates the code after it 
    printf("the character \0 is used to terminate strings"); // outputs "the character"
    //charcter string is a char array
    char word[] = {'h', 'e','l', 'l', 'o'}; //this is the same as below
    char word1[6] = {"hello"}; // have to add an extra charcter for null - so even tho i have 5 letters i have to give it 6 spaces
    //let the compiler figure it out for you and don't put any number in the bracket
    char hello[]= {"hello"};
    /* cannot do the following:
    char s[100];
    s = "hello"; 
    you can't assign one array of characters to another array of characters like this - must use the following:
    strncpy() to assign a value to a char array after it has been declared or initialized
    DISPLAYING A string
    to display a string as an output using the printf function, you do the following:
    printf("\n the message is: %s", message);
    */
    char input[10];
    printf("input your name ");
    scanf("%s", input);
    
    const int MONTHS = 12;
    //const makes MONTHS a read only value now - can't alter the value of MONTHS
    //same goes for strings
    const char message[] = "I am forever";
    
    
}