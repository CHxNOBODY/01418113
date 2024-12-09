#include <stdio.h>
#include <stdlib.h>

int main() {
    char num1_input[100], num2_input[100];
    long long num1, num2;

    fgets(num1_input, 100, stdin);
    fgets(num2_input, 100, stdin);

    num1 = atoll(num1_input);
    num2 = atoll(num2_input);

    while (num2 != 0) {
        long long remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }
    
    if ()
    {
        /* code */
    }
    
}