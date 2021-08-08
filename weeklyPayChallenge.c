#include<stdio.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25

int main(){
int hours_Worked=0;
printf("please input the # of hours you worked this week\n");
scanf("%d", &hours_Worked);
int overtime=0;
overtime = hours_Worked - 40;

double gross_pay=0;
if(hours_Worked <= 40) {
    gross_pay = hours_Worked * PAYRATE;
    printf("your gross pay is $%.2lf\n", gross_pay);
}   
else {
    gross_pay = (overtime * 18.0) + ( 40 * PAYRATE);
    printf("your gross pay is $%.2lf\n", gross_pay);    
}

double taxes=0;
if(gross_pay <= 300){
    taxes = TAXRATE_300 * gross_pay;
    printf("your taxes amount to $%.2lf\n", taxes);
}
else if (gross_pay >300 && gross_pay <= 450){
    taxes = TAXRATE_300 * 300 + TAXRATE_150 * (gross_pay - 300);
    printf("your taxes amount to $%.2lf\n", taxes);
}
else if (gross_pay > 450) {
    taxes = TAXRATE_300 * 300 + TAXRATE_150 * 150 + TAXRATE_REST * (gross_pay - 450);
    printf("your taxes amount to $%.2lf\n", taxes);
}

double netpay = 0;

netpay = gross_pay - taxes;
printf("your net pay for the week is $%.2lf", netpay);

return 0;
}