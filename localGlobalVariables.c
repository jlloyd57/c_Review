#include<stdio.h>
/*LOCAL VARIABLES
value of local variable can only be accessed by the function in which the variable is defined 
- value can't be accessed by any other function, and if the initial value is given to the variable inside a function that value is assigned to it each time 
the function is called
GLOBAL VARIABLES
-can be accessed by any function in the program- they can change its value 
-has the lifetime of the program
-declared outside of any function - does not belong to any particular function
- if you have a local variable of the same name as the global one it will take presidence over the global variable in that function
    - can't access the global value in a function where you have a local variable of the same name 
- should be avoided - they promote dependwncies which we don't want 
*/
int myGlobal = 0;

int main(){
    int myLocalMain = 0; //local variable
    //can access myGlobal and myLocal
    return 0;
}

void myFunction(){
    int x; //local
    //can access myGlobal and x, but not myLocalMain
}