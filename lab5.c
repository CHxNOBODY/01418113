#include <stdio.h>
int main(){

    int amount = 50;
    int bill_50 = 0, bill_20 = 0, bill_5 = 0, bill_1 = 0;

    bill_50 = amount / 50;
    amount %= 50; // หาเงินที่เหลือ
    bill_20 = amount / 20;
    amount %= 20; // หาเงินที่เหลือ
    bill_5 = amount / 5;
    amount %= 5; // หาเงินที่เหลือ
    bill_1 = amount;

    printf("1: %d\n", bill_1);
    printf("5: %d\n", bill_5);
    printf("20: %d\n", bill_20);
    printf("50: %d\n", bill_50);

    return 0;
}