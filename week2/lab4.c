#include <stdio.h>
#include <stdlib.h>

int main(){
    char salary[100];
    
    fgets(salary, 100, stdin);
    int salary_int = atoi(salary);

    if (salary_int < 0) {
        printf("Error: Salary must be greater or equal to 0.\n");
    }
    else if (salary_int > 100000) {
        printf("%d", salary_int * 0.5,salary_int);
    }
}