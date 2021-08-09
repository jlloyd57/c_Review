#include<stdio.h>
#define MONTHS 12
  //initializing an array - not neccessary to completely initialize an array- the remaining values would be set to 0
int main(){
    int course[5] = {0,0,0,0,0};
    int integers[5] = {0,1,2,3,4};

    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for(index =0; index < MONTHS; index++){
        printf("Month %d has %2d days.\n", index+1, days[index]);
    }

    int array_values[10]={0,1,4,9,16};
    int i;

    for(i=5; i <10; i++)
        array_values[i]= i*i; //setting the array value to be that position #^2 ie array_value[5] = 25..
    
    for(i=0; i<10;++i)
        printf("array_values[%i]=%i\n",i,array_values[i]);
    
}