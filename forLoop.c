#include <stdio.h>

int main(){

for(int count = 1; count <=10; count++)
    printf("%d\n", count);

//while loop - while this condition is true - keep on doing this 
/* 
while(expression){
    statement 1;
    statement 2; if needed
}
*/
//counter control loop
int counter = 1;

while (counter < 5){
    printf("%d\n",counter);
    ++counter;
}
int num =0;
scanf("%d", &num);

while(num !=1){
    printf("input -1 to kill me\n");
    scanf("%d", num);
}
/* do-while loop is a loop where the body is executed for the first time unconditionally
- always guaranteed to execute at least one loop
- condition is at the bottom 
- after initial execution, the body is only executed while the condition is true 
do
    statement
while(expression);
*/
int number=0;
do
{
    scanf("%d", &number);
} while (number !=20);

}

