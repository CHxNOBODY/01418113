#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char pizza_size[10], pepperoni[10], cheese[10], mushroom[10];
    float area;
    int fixedcost, basecost;
    int extracost = 0;

    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(pizza_size, 10, stdin);

    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pepperoni, 10, stdin);

    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(cheese, 10, stdin);

    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mushroom, 10, stdin);

    
}