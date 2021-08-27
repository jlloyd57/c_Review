#include <stdio.h>
#include <string.h>
int main(){
    int i;

    char multiple[] = "a string";
    char *p = multiple;

    for(i=0; i < strlen(multiple); i++)
    printf("multiple[%d] = %c  *(p+%d) = %c  &multiple[%d] = %p  p+%d = %p\n", i, multiple[i], i, *(p+i), i, &multiple[i],i,p+i);

    long multiplel[] = {15L, 25L, 35L, 45L};
    long *pLong = multiplel;

    for(i=0; i < sizeof(multiplel)/sizeof(multiplel[0]); ++i)
    printf("address p+%d (&multiple[%d]) : %llu       *(p+%d)     value: %d\n", i, i, (unsigned long long)(pLong+i), i,  *(pLong+i));

    printf("\n    Type long occupies: %d bytes\n", (int)sizeof(long));
 }