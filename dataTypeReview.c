//variables can only start with a letter or an _ 
// type-specifier variable-name; - same as c++
#include <stdio.h>
#include <stdbool.h>

int main(){
    /* int j= 9;
    can override this value in another line 
    j = 5; over wrote 9 */
    float jenn = 23.333;
    double jenn2  = 55.555555e+11;
   // if you don't use the standard header
   // _Bool boolVariable = 1;
    bool boolVariable = true; //works because of the header - otherwise has to be = 0 or 1 and declared as shown above 
    // short int when the program uses a lot of memory and small number is needed in that case - makes it more efficient
    // long int/float or just long - larger in value- double has decimal spots so if you just have a large int you use long
    //enum data type - data type when defined that can only store variables that are assigned valid
    enum primaryColor {red, yellow, blue}; //primaryColor variables can only hold these values 
    enum primaryColor myColor, jennsColor;
    myColor = red;
    //myColor = green; is invalid 
    jennsColor = blue; 
    enum month {Jan, Feb, March, April, May, June, Jul, Aug, Sep};
    enum month thisMonth;
    thisMonth = Feb; // this value = 1 because its the second one in the identifier list 

    enum direction {up, down, left=10, right};
    
    //up =0, down = 1, left = 10 because it was assigned this, right = 11 because its immediately after left 
    enum gender {male, female};
    enum gender myGender;
    myGender = female;
    enum gender anotherGender = male;
    bool isFemale = (myGender == anotherGender); //this would be false 
    printf("myGender is %u\n", isFemale);
    /* Char - represents a single character - letter 'a' or digit '6' or semicolon ';'
    char broiled
    broiled = 'T';
escape sequences \n - newline represent specific actions 
    char x = '\n' won't print anything it will just move to the next line
    printf(%c, x); print pops to a new line 
    */



    return 0;
}


