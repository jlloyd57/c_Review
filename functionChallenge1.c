#include <stdio.h>

//find GCD of two non-neg integers and return the result 
//calculate absolute value of a number 
//calculate sqrt


int GCD(int x, int y);
float absValue(float a); //test with ints and floats 
float squareRoot(float b); //invoke absValue to test if it's negative 

int main(){
    int gcd=0;
    gcd= GCD(49,56);
    printf("GCD of these two numbers is %d\n", gcd);
    float abs = 0;
    abs = absValue(9);
    printf("the absolute value of this number is %.2f\n", abs);
    printf("%.2f\n", squareRoot(-6.0));
    printf("%.2f\n", squareRoot(16.0));
    printf("%.2f\n", squareRoot(225));
}

int GCD(int x, int y){
int temp;
while(y !=0){
    temp = x % y;
    x = y; // sets x = y value
    y = temp; //sets y = temp value
}
return x;

}

float absValue( float a){
    if (a >= 0)
        return a;
    return a*-1;
}

float squareRoot(float b){
    const float epsilon = .00001;
    float guess = 1.0;
    float returnValue =0;

    if (b < 0){
        printf("neg square root value\n");
        returnValue = -1.0;
    }
    else {
        while( absValue( guess* guess -b) >=epsilon)
            guess = (b/ guess+guess) / 2.0;

        returnValue = guess;
    }
}
