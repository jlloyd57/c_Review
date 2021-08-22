#include <stdio.h>
#include <string.h>

//display a string in reverse order - should read input from keyboard and use the strlen string function
//sort the strings of an array using a bubble sort- use strcmp and strcpy functions 
/* input number of strings:
input string 3: 
zero one two
expected output: stringd appear after sorting: one two zero */

//char reverseString(char str[]);
char sort(const char s1[], const char s2[], const char s3[]);

int main (){
    char str[100];
    char name[25][50],temp[50]; //creating 25 strings of size 50

    int l, i, n, j;
    printf("input a string ");
    scanf("%s",str);

    printf("the reverse of the string is: ");
    l = strlen(str);
    for(int i=l; i >= 0; i--){
        printf("%c", str[i]);     
    }
   printf("\n\nSorts the strings of an array using bubble sort: \n");

   printf("Input number of strings :");
   scanf("%d", &n);

   printf("input string %d : \n", n);

   for(i = 0; i < n; i++){ // n is the # of names they inputted
       scanf("%s", name[i]);//read name into name array
   }
    //bubble sort
    for(i = 1; i <=n; i++)
        for(j=0; j<=n-i;j++)//o to all the second to last string
                if(strcmp(name[j],name[j+1])>0)//compare first string to other strings
                { //if the second one is larger it does the following
                    strncpy(temp, name[j], sizeof(temp)-1); //put first into temp
                    strncpy(name[j], name[j+1], sizeof(name[j])-1);//second into first
                    strncpy(name[j+1], temp, sizeof(name[j]+1)-1); //this puts the first into the second spot
                }
    printf("strings after sorting : \n");
    for(i=0; i<=n;i++){
        printf("%s\n",name[i]);
    }
}



