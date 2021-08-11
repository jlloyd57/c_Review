#include<stdio.h>

int main(){
    //2d float array with hard coded values for rain past 5 years
    // 5 rows (year) and 12 columns for each month 

    float rain[5][12] = {
        {0.8, 3.0, 5.3, 0.9, 5.1, 1.7, 1.8, 2.0, 2.3, 3.1, 3.2, 0.6},
        {1.9, 2.7, 1.0, 1.1, 2.4, 0.7, 1.8, 2.0, 2.1, 4.0, 3.3, 3.6},
        {2.0, 1.6, 1.1, 2.3, 6.0, 0.1, 4.3, 1.7, 4.5, 0.4, 1.8, 0.8},
        {2.3, 1.4, 6.2, 2.4, 1.8, 0.5, 3.4, 8.1, 6.0, 5.0, 0.9, 0.5},
        {2.4, 3.2, 3.1, 4.0, 1.3, 1.4, 1.6, 3.2, 1.4, 1.9, 1.1, 0.3}
    }; 
    int year, month;
    float subtotal, total;

    printf("YEAR\t\tRAINFALL (inches)\n"); 
    for(year=0, total =0; year < 5; year++){ //go through each row and looking at each column
        for(month=0, subtotal=0; month < 12; month++){
            subtotal += rain[year][month];
        }
        printf("%d \t%12.1f\n", 2010 + year, subtotal);
        total =+ subtotal;
    }
    printf("\nThe yearly avg is %.1f inches.\n\n", total/5);
    printf("MONTHLY AVGs: \n\n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

    for(month=0; month < 12; month++){ //going through each column and look at each row 
        for(year=0, subtotal=0; year < 5; year++){
            subtotal += rain[year][month];
        }
        printf("%4.1f", subtotal/5);
    }
}