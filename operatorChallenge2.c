//display the byte size of basic databytes in c 
#include <stdio.h>

int main(){
    printf("variables of type int occupy %zd bytes\n", sizeof(int));
    printf("variables of type char occupy %zd bytes\n", sizeof(char));
    printf("variables of type double occupy %zd bytes\n", sizeof(double));
    printf("variables of type long occupy %zd bytes\n", sizeof(long));
    printf("variables of type float occupy %zd bytes\n", sizeof(float));
    printf("variables of type short occupy %zd bytes\n", sizeof(short));
}