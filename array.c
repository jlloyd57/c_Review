#include<stdio.h>

//arrays allow you to group values under a single name - don't need seperate variables for each item of data
// array is a fixed number of data items that are all of the same type 
int main() {
    int grades[10]; // declaring an array storing 10 values
    int count = 10; // number of values to be read 
    long sum = 0; //sum of the numbers
    float average = 0.0f; //average of the numbers

    printf("\nEnter the 10 grades in: \n"); //prompt input

    //read 10 numbers to be averaged
    for(int i=0; i <count; i++){
        printf("%2u> ",i+1); //%2u is how you print an array
        scanf("%d", &grades[i]); //read a grade
        sum += grades[i]; //add it to the sum
    }

    average = (float)sum/count;
    printf("\nAverage of the ten grades entered is: %.2f\n", average); 

  

}