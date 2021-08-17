#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main(){
    double value = 0;
    char str[] = "3.5 2.5 1.26";
    char *pstr = str;
    char *ptr = NULL;

    while(true){
        value = strtod(pstr, &ptr); //convert starting at pstr to doubles
        if(pstr == ptr) //pstr stored if no conversion
            break;
        else{
            printf("%f\n", value); //output resultant value
            pstr=ptr; //store for next conversion
        }
    }
}