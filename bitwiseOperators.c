#include <stdio.h>
/* examples of binary operators 
& AND - copies a bit to the result if it exists in both operans
| OR- copies a bit if it exists in either operand
^ XOR copies it if its exists in one but not both operands
~ Ones Complement is unary and has the effect of flipping bits 
<< Shift Left the left operand value is moved left by the number of bitd specified by the right operand 
A = 0011100 and its A << 2 --> A = 111
>> Right Shift the left operand value is moved to the right by the number of bits specified by the right operand

*/
int main() {
    unsigned int a = 60; // 0011 1100 *unsigned int means it can be only be positive value* 
    unsigned int b = 13; // 0000 1101  *signed can be neg or pos*
    int result = 0;
    int orResult;
    int shiftL;
    int shiftR;

    result = a & b;
    //   0000 1100
    orResult = a | b;
    //  0011 1101
    shiftL = a << 2;
    // a actually equals 0000 0000 0000 0000 0000 0000 0011 1100
    //shifting left 2:   0000 0000 0000 0000 0000 0000 1111 0000
    //shifting left 4:   0000 0000 0000 0000 0000 0011 1100 0000
    shiftR = a >> 4;
    // a actually equals 0000 0000 0000 0000 0000 0000 0011 1100
    //shifting right 4:  0000 0000 0000 0000 0000 0000 0000 0011 
    printf("a is %d\n", a);
    printf("result is %d\n", result);
    printf("orResult is %d\n", orResult);
    printf("shift left is %d\n", shiftL);
      printf("shift right is %d\n", shiftR);
    return 0;
}
 
