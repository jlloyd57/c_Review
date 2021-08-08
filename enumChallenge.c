#include <stdio.h>

int main() 
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO=10, EBAY, MICROSOFT};
    enum Company google = GOOGLE;
    enum Company xerox = XEROX;
    enum Company ebay = EBAY;
    printf("the value of google is: %d\n", google);
    printf("the value of xerox is: %d\n", xerox);
    printf("the value of ebay is: %d\n", ebay); // 11 because i set yahoo to be 10 
}