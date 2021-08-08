//when you successively compare the value of a variable against others 
#include<stdio.h>
/*
switch (expression) // needs to be a constant or an expression that equals a constant 
{
case value1: 
    program statement
... 
    break;
case valuen:
    program statement
    program statement
    ...
    break;
default:
    program statement
    ...
    break;
}
*/
int main(){
enum Weekday {Mon, Tues, Wed, Thurs, Fri, Sat, Sun};
enum Weekday today = Fri;

switch (today)
{
    case Sun:
        printf("Today is Sunday\n");
        break;
    case Mon:
        printf("Today is Monday\n");
        break; //without this break- it would not end the program here - it would also print that "Today is Tuesday" 
    case Tues:
        printf("Today is Tuesday\n");
        break;
    default: //defaults to this when it doesn't match any cases 
        printf("who even knows what day it is\n");
        break;
}


}
