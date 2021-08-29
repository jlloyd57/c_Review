#include<stdio.h>
#include<stdlib.h> 
#include<string.h>

//user can # of bytes they need for malloc and then a text string 
//the user can enter the limit of the string they enter-use for malloc
//display text entered 
//release mem at end 

int main(){
    char *str = NULL;
    int b =0;
    char text; 
    printf("enter number of bytes you want allocated \n");
    scanf("%d", &b);//this is multiply by a pointer so we need the address
    str = (char*)malloc(b * sizeof(char));   
    if(str != NULL){
    printf("input a text string: \n");
    scanf(" ");
    gets(str);

    printf("the text you entered is: %s\n", str);
    }

    free(str);
    str = NULL;

}