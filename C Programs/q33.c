#include <stdio.h>
#include <string.h>

struct item{
    char item_name[10];
    int qty;
    float price;
    float total_amt;
}i,*pitem;

void main(){
    pitem = &i;
    pitem->qty = 7;
    pitem->price = 45;
    pitem->total_amt = pitem->qty * pitem->price;
    strcpy(pitem->item_name, "Apple");

    printf("Details of item :-\n");
    printf("Item name : %s\n", pitem->item_name);
    printf("Quantity : %d\n", pitem->qty);
    printf("Price : %.2f\n", pitem->price);
    printf("Total Amount : %.2f", pitem->total_amt);
}