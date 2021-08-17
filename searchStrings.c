#include <stdio.h>
#include <string.h>

/*pointers
int number = 25;
int *pNumber = &number;
dereference the pointer to get the value *pNumber = 25;

SEARCHING A STRING FOR A CHARACTER
strchr() function does this 
    first arg is the string to be searched and second is the character you're looking for 
    function searches from the beginnning and returns a pointer to the first position in the string where the character is found
    type char* 

SEARCHING FOR A SUBSTRING
strstr() searches one string for the first occurance of a substring 
    returns pointer to the position in the first string where the substring is found 
    first arg is string to be searched & the second is the substring you're looking for 

TOKENIZING A STRING-useful for parsing
    token is a sequence of characters within a string thats bounded by a delimeter (space, comma, period, etc)
    tokenizing-break a string up into words using strtok()
    requires 2 arguments - a string to be tokenized & a string containing all the possible delimiters
*/
int main(){
    char str[] = "the quick brown fox"; //string to be searched
    char ch = 'q'; //character we're looking for
    char *pGot_Char = NULL;
    pGot_Char = strchr(str, ch); //points to value of "quick brown fox"
    printf("%s\n", pGot_Char);

    char text[] = "Every dog has his day";
    char word[] = "dog";
    char *pFound = NULL;
    pFound = strstr(text,word); //points to value of dog has his day
    printf("%s\n", pFound);

    char name[] = "hi - my name is - Jenn";
    const char del[] = "-";
    char *token;

    //get first token
    token = strtok(name,del);
    //walk through other tokens
    while(token != NULL){
        printf(" %s\n",token);

        token=strtok(NULL,del); //get next token by calling this 
    }

    char buf[100];
    int nLetters = 0; //# of letters in input
    int nDigits=0; //# of digits in input
    int nPunct=0; // # of punction in input

    printf("enter a string of less than %d characters: \n", 100);
    scanf("%s", buf);

    int i=0; //buffer index
    while(buf[i]){ //iterate through the string to see if it has certain characters
        if(isalpha(buf[i])) //isalpha checks if a letter is capitalized 
            ++nLetters;
        else if(isdigit(buf[i]))
            ++nDigits; 
        else if(ispunct(buf[i]))
            ++nPunct;
        ++i;
    }
    printf("your string contained %d letters, %d digits, and %d punction characters", nLetters, nDigits, nPunct);
    
}