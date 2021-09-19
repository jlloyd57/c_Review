#include <stdio.h>
#include <stdlib.h>

struct item{
    char *itemName;
    int quantity;
    float price;
    float amount; //stores quantity * price 
};

void readItem( struct item *ptr );
void printItem( struct item *ptr );

 
int main(){
   struct item itm; // allocates mem for the 4 variables in the structure
   struct item *pItem;

   pItem = &itm; //assigning the address to the pointer 

   //for structures that are pointers
   pItem-> itemName = (char *) malloc(30*sizeof(char)); //allocating mem for name
   if (pItem == NULL) //have to check for null with malloc 
        exit(-1);
    readItem(pItem);

    printItem(pItem);
//gotta free the memory we allocated 
    free(pItem->itemName);

    return 0;
}

void readItem( struct item *ptr ){
    printf("enter product name: \n");
    scanf("%s",ptr->itemName); //pointer
    printf("enter price: \n");
    scanf("%f", &ptr->price); //not a pointer so you have to do &
    printf("enter quantity: \n");
    scanf("%d", &ptr->quantity);
    ptr->amount = (float)ptr->quantity * ptr->price;
}

void printItem(struct item *ptr){
    printf("\nName: %s", ptr->itemName);
    printf("\nPrice: $%.2f", ptr->price);
    printf("\nQuantity: %d", ptr->quantity);
    printf("\nAmount: $%.2f", ptr->amount);

}