#include <stdio.h>
#include <stdlib.h>

int main(){
    char side_a [3], side_b [3], side_c [3];
    int a, b, c;

    printf("Enter lenghth of side A: ");
    fgets(side_a, 3, stdin);
    printf("Enter lenghth of side B: ");
    fgets(side_b, 3, stdin);
    printf("Enter lenghth of side C: ");
    fgets(side_c, 3, stdin);

    a = atoi(side_a);
    b = atoi(side_b);
    c = atoi(side_c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || b + c <= a || c + a <= b) {
        printf("Triangle type is invalid.");
    }
    else if (a == b && b == c) {
        printf("Triangle type is equilateral.");
    }
    else if (a == b || b == c || a == c) {
        printf("Triangle type is isosceles.");
    }
    else if (a != b && b != c && a != c) {
        printf("Triangle type is scalene");
    }
    return 0;
}