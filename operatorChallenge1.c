//convert numbers of minutes into days and years 
#include<stdio.h>
//ask user to enter the number of minutes via the terminal 
// convert and output the number of minutes into days and years (double)

int main() {
    double min=0;
    printf("Input a number of minutes ");
    scanf("%lf", &min);
    double minInYear;
    minInYear = 60 * 24 * 365; //divide by min entered to get years 
    double years=0;
    years = min/minInYear;
    printf("The number of minutes you inputed in years is: %lf\n", years);
    double days=0;
    days= min /(60 * 24);
    printf("the number of minutes inputted in days is: %lf\n", days); 
}