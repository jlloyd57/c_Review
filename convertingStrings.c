#include <stdio.h>
#include <string.h>

/* 
toupper() converts from lowercase to uppercase
tolower() converts from upper case to lower case 
atof() converts double to a float - character strings with numbers you can convert 
atoi() int to ascii - number to string 

*/

int main(){
    //converting string to uppercase
    char text[100];
    char substring[40];

    printf("enter a string to be searched (less than %d characters): \n", 100);
    scanf("%s", text);

    printf("enter a string (less than %d characters): \n", 40);
    scanf("%s", substring);

    printf("first string entered:\n%s\n", text);
    printf("second string entered:\n%s\n", substring);

    //convert to uppercase
    for(int i=0; (text[i]=(char)toupper(text[i])) !='\0'; ++i);
    
    for(int i=0; (substring[i]=(char)toupper(substring[i])) !='\0'; ++i);
    
    printf("2nd string %s found in the first.\n",((strstr(text,substring) == NULL) ? "was not" : "was"));
}