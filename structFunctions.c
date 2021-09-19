#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//two parameters each of with is type Family 
struct Family{
    char name[20];
    int age;
    char father[20];
    char mother[20];
};
//this method below can take a bit of time to copy large structures as args, and requires that amt of memory to store them
bool siblings(struct Family member1, struct Family member2){
    if(strcmp(member1.mother, member2.mother)==0)
        return true;
    else
        return false;
}
//pointers to structures avoid mem consumption and the copying time 
bool siblings(struct Family *pmember1, struct Family *pmember2)
{
    if(strcmp(pmember1->mother, pmember2->mother)==0)
        return true;
    else
        return false;
}
/*
can use the const modifier to not allow any modification of the members of the struct(what the struct is point to) you would do this instead:
bool siblings(Family const *pmember, Family const *pmember2) the rest stays the same as the one above  

if you don't want to change the value of pmember1 and 2 (an address) do this: *this is redundant not super useful*
bool siblings(Family *const pmember, Family *const pmember2) the rest stays the same as the one above  
*/