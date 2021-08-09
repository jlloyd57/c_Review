#include <stdio.h>

int main(){
    enum Day{Mon, Tues, Wed, Thur, Fri, Sat, Sun};
    for (enum Day day= Mon; day <=Sun; ++day){
        if(day ==Wed)
            continue;
        printf("it's not wednesday\n");
    }
    //break in a loop jumps out of the loop
}