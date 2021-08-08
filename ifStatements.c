#include<stdio.h>

int main() {
    int num_to_test, remainder;

    printf("enter number to be tested\n");
    scanf("%d", &num_to_test);

    remainder = num_to_test%2;

    if(remainder==0)
        printf("the number is even\n");
    else
        printf("the number is odd\n");

    int num, sign;
    printf("input a number ");
    scanf("%d", &num);

    if(num < 0){
        sign=-1;
    }
    else if(num == 0){
        sign =0;
        }
    else {
        sign = 1;
    }
    printf("sign= %d\n", sign);

    //conditional operator example
    x = y > 7 ? 25 : 50;
    if x = y > 7 
    // if for example x = 5 and y = 9 , if x > 9 then sets x = 25 otherwise sets x = 50
}