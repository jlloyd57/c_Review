#include<stdio.h>
#include<stdbool.h>

int main(){

    int p;
    int i;
int prime[50]={0}; //initializing array
    int primeIndex =2;
    //hardcoding prime numbers
    prime[0]= 2;
    prime[1]= 3;
    bool isPrime;
    for(p=5; i <=100; p=p+2){
        isPrime = true; // we have a prime number

        for(i=1; isPrime && p/prime[i] >= prime[i]; ++i)
            if(p % prime[i] == 0)
                isPrime = false; 
            
            if (isPrime == true){
                prime[primeIndex] = p; 
                ++primeIndex;
            }
        }
    
        for(i =0; i <primeIndex; ++i)
            printf("%i ", prime[i]);

        printf("\n");
    }
    //need 3 loops - last one to print data
//inner loop : go from 1 to p/prime[i] >= prime[i]
//look for previous primes and ensure the value of p does not exceed the square root of primes 
//outer loop make sure they're not even - increment them by 2 
// if current num mod prime[] !0 no primes 
