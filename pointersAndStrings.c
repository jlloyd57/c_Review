#include <stdio.h> 

//comparing an= char array and a char pointer
void copyString(char to[], char from[]){
    int i;

    for(i = 0; from[i] != '\0'; ++i) //incrementing through from[] array
        to[i] = from[i]; //assigning values of from[i] to to[i]

    to[i] = '\0'; //at very end when we see null we add a null character to the end of the array
}

void copyString1(char *to, char *from) { //declaring pointers
    /*for( ; *from != '\0'; ++from, ++to) //iterate until from hits null terminator, increment both pointers
        *to = *from; //dereference both to get the real values */
    while(*from) //the null character is equal to the value 0 (and false), so this loop will exit when it hits that
        *to++ = *from++; //++ doesn't add 1 until after the statement is done, sets them equal, then increments after so you get that first element in the loop
    *to = '\0'; //add that null to the end
}

int main(){
    char string1[]="a string to be copied";
    char string2[50];

    copyString1(string2, string1);
    printf("%s\n", string2);

}