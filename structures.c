#include <stdio.h>

int main(){
    //keyword struct enables you to define a collection of variables of various types that you can treat as a single unit
   /*  this is exactly the same thing as below it 
    struct date { //no memory allocation- this just defines it 
        int month; //structure member 
        int day;
        int year;
    };

    struct date today; //instance of the structure, called today */
    struct date { //no memory allocation- this just defines it 
        int month; //structure member 
        int day;
        int year;
    } today; //instance of the structure, called today, is declared at the same time that the structure is defined 

//need special syntax to access members of a structure 
    today.month = 8;
    today.day = 31;
    today.year = 2021;

    printf("Today's date is %i/%i/%i.2i\n", today.month, today.day, today.year % 100);

//can specify the member names in the initialization list 
    //enables you to initialize the members in any order, or to only initialize specified members 
    member = value;
    struct date date1 = { .month = 12, .day = 10};
    //same thing as above - initializing a structure
    struct date today = {7, 2, 2021}; 
    struct date date1 = {12,10}; //sets date1.month to 12 and date1.day = 10 but gives no initial value for the date.year
    //set the year member of the date structure variable today to 2021
    struct date today = {.year = 2021};

    //can initialize using compound literals so the args can be specified in any order 
    today = (struct date) {9, 25, 2021};
    //.member notation
    today = (struct date) {.month = 9, .date = 25, .year = 2021};
}