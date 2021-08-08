#include <stdio.h>

int main(){
    //this is how to print-printf is equal to cout 
    //printf("Hi, my name is Jenn");
    /* scanf() - like cin - how to read inputs - takes a text and converts it ot whatever you tell it to
    if you use scanf() to read a value precede the variable name with an & 
    if you use scanf() to read into a character array don't use an &
    %s - reading in a string 
    %d - reading in an int 
    */ 
   char str[100];
   int i;

   printf("enter a value: ");
   //scanf("%d",&i); //just entering in a number- first arg is data an int and storing it into i
   scanf("%d %s", &i, str); 

   printf("\nYou entered: %d %s ", i, str);
   //printf("\nYou entered: %d\n", i); 

    //reading in double - %lf 
    double x;
    scanf("%lf", &x);
    return 0;
}
