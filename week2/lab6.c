#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch = getchar();
    
    if (ch >= 'A' && ch <= 'Z') {
        printf("Outputs: upper case\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Outputs: lower case\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Outputs: digit");
    }
    else if (ch == '+, - , * , /') {
        printf("Outputs: others");
    }

    return 0;
}