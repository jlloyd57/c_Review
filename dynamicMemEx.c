#include<stdio.h>
#include<stdlib.h> 
#include<string.h>

int main(){
    char *str = NULL;

    //initial memory allocation
    str = (char*)malloc(15 *sizeof(char));//casting a malloc for 15 characters to char
    strcpy(str, "Jennifer"); //this stores Jennifer as the value where str points to 
    printf("String = %s, Address = %p\n", str,str); 

    //reallocating memory
    str = (char*)realloc(str, 25*sizeof(char)); //need to store more data than 15 so we realloc 25
    strcat(str, ".com");
    printf("string = %s, address = %p\n", str, str);

    free(str);//free memory

    return(0);
}