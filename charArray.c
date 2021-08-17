#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int Count(const char str[]); 
void concatenate(char result[], const char str1[], const char str2[]); //return void
int Equal(const char s1[], const char s2[]); 

int main(){
    const char word1[] = "jenn";
    const char word2[] = "dog";
    printf("the length of the string is %d and %d\n", Count(word1), Count(word2));
    char result1[50];
    concatenate(result1, word1, word2);
    printf("%s\n", result1);
    printf("%d\n", Equal("Jenn", "Jenn"));
    printf("%d\n", Equal("Jenn", "Jenns"));
}

int Count(const char str[]){
    int length =0;
    while(str[length] != '\0')
        ++length;
    return length;
}

void concatenate(char result[], const char str1[], const char str2[]){
    int i,j;
    for(i=0; str1[i] != '\0'; ++i)
       result[i]=str1[i];
    for(j=0; str2[j] != '\0'; ++j)
        result[i+j]=str2[j]; //whatever i ended with, adds j to 
    
    result[i+j] = '\0';
}

int Equal(const char s1[], const char s2[]){
    int i = 0;
    bool isEqual = false;// they're equal 
    while(s1[i]==s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    if(s1[i] == '\0' && s2[i] == '\0')
        isEqual = true; 
    else
        isEqual = false;
    return isEqual;
}