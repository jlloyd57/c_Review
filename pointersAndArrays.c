#include <stdio.h>

int arraySum(int array[], const int n){
        int sum = 0, *ptr;
        int *const arrayEnd = array + n; //defines end boundary- pointer arrayEnd will always point there

        for (ptr = array; ptr < arrayEnd; ++ptr)
            sum +=*ptr; // sum = sum + *ptr
        return sum;
    }
//literally same function but with pointer notation- its a simpler function

int arrayPtrSum(int *array1, const int n1){
        int sum1 = 0;
        int *const arrayEnd1 = array1 + n1; //defines end boundary- pointer arrayEnd will always point there

        for ( ; array1 < arrayEnd1; ++array1)
            sum1 +=*array1; // sum = sum + *ptr
        return sum1;
    }
int main(){
    int values1[100];
    int *valuesPtr;
    valuesPtr=values1; //points to the first value in the array 
    // this is also equivalent valuesPtr = &values[0];
    //use pointers to increment through elements in an array
    *(valuesPtr + 3); //points to 4th element in the array- increments it 3 spots after the 1st 
    *(valuesPtr +10)=27; //sets the 11th element in the array values[10]=27
    valuesPtr +=1; // if pointing at the first element ... now it's pointing to the second index 
    ++valuesPtr; //points to next value in the array
    --valuesPtr; //points to previous value in array
    //gotts make sure you're within bounds to do this ^^
    int arraySum(int array[], const int n);
    int values[10]= {3,7,-9,3,6,-1,7,9,1,-5};

    printf("the sum is %i\n", arraySum(values,10));
    printf("----------\n");

    int arrayPtrSum(int *array1, const int n1);
    int values2[10]= {3,7,-9,3,6,-1,7,9,1,-5};

    printf("the sum is %i\n", arrayPtrSum(values2,10));

}