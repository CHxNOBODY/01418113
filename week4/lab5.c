#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    int n;

    fgets(input, 100, stdin);
    n = atoi(input);

    if (n <= 0 || n > 26) { 
        printf("-\n");
        return 0;
    }

    int size = 2 * n - 1; 
    for (int i = 0; i < size; i++) {
        int num_chars = (i < n) ? i : (size - i); 
        int num_dashes = n - num_chars - 1; 

        for (int j = 0; j < num_dashes; j++) {
            printf("-");
        }

        for (int j = num_chars; j >= 0; j--) {
            printf("%c", 'a' + (n - 1 - j));
            if (j > 0) {
                printf("-");
            }
        }

        for (int j = 1; j <= num_chars; j++) {
            printf("-%c", 'a' + (n - 1 - j));
        }

        for (int j = 0; j < num_dashes; j++) {
            printf("-");
        }

        printf("\n");
    }

    return 0;
}
