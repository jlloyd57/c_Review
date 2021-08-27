#include <stdio.h>

int stringLength(const char *ptr){
    //ptr points to beginning of array
    const char *last = ptr; 
    while(*last)
        ++last; //this will increment me to the end    
  
    return last - ptr;

}

int main(){
    printf("%d \n", stringLength("howdy"));
}