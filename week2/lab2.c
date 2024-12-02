#include <stdio.h>
#include <stdlib.h>

int main() {
    char sticker[100], price[100];
    double price_in;
    int sticker_in;
    int discount;

    fgets(sticker, 100, stdin);
    fgets(price , 100, stdin);

    sticker_in = atoi(sticker);
    price_in = atoi(price);

    if (sticker >= 9){ 
        discount += 40;
        
    }
}
