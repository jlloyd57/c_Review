//display perimeter and area of a rectangle 
#include <stdio.h>

int main()
{
    double width;
    printf("Please enter block width ");
    scanf("%lf", &width);
    double height;
    printf("enter a block height ");
    scanf("%lf", &height);
    double perimeter = 0.0;
    double area = 0.0;

    perimeter = 2.0 * (height + width);
    area = width * height;


    /*double test = 5.6;
    printf("test value ");
    scanf("%lf", &test);
    printf("test value is %lf\n", test); */

    //display height, width and perimeter variables in correct format
    // in order - perimeter, then area, then height and width 
    
    printf("the perimeter of the block is %lf\n", perimeter);
    printf("the area of the block is %lf\n", area);
    printf("the width of the block is %lf\n and the height is %lf\n", width, height);
    
   return 0;
}