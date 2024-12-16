#include <stdio.h>
#include <stdlib.h>

int main() {
    char number_input[20];
    int number;

    fgets(number_input, 20, stdin);
    number = atoi(number_input);
    
    int d0 = number & 1; 
    int d1 = number >> 1 & 1;
    int d2 = number >> 2 & 1;
    int d3 = number >> 3 & 1;

    printf("Binary number of %d is %d%d%d%d.", number, d3, d2, d1, d0);

    return 0;
}