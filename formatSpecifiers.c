//used when displaying variables as output 
#include <stdio.h>
#include <stdbool.h>

int main(){
    int sum = 89;
    printf("the sum is %d\n", sum); //tell it to display what type of data the variable contains 
    float f = 5.555;
    printf("the sum is %f\n", f);//float
    double d = 3.41;
    printf("the sum is %lf\n", d); //double
    char c = 'j';
    printf("the sum is %c\n", c); // character
    bool boolVar = 0;
    printf("the sum is %i\n", boolVar); // bool is an integer 
    float x = 3.234999;
    printf("rounded value is %.2f", x);

    return 0; 
}