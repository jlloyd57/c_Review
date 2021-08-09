#include<stdio.h>

int main(){
int answer = 4;
int guess = 0;
int numOfTries = 5;

printf("This is a guessing game, you have five tries to guess the number i am thinking between 0 and 20... Enter your first guess ");
while(guess != answer && numOfTries > 0){
    scanf("%d", &guess);
    if(guess < 0 || guess > 20){
        printf("Please only guess a number between 0 and 20\n");
        }
    else{
            if (guess == answer){
                printf("congrats- you guessed correctly!");
               // break; 
               }
            else if(guess < answer){
                printf("Nice try but my number is greater than your guess\n");
                --numOfTries;
                printf("you now have %d guesses left\n", numOfTries);
              // break;
            }
            else if(guess>answer){
            printf("Nice try but my number is less than your guess\n");
                --numOfTries;
                printf("you now have %d guesses left\n", numOfTries);
              //  break;
            }

        }
    }
    printf("Opps looks like you ran out of guesses");

}