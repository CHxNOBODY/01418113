#include <stdio.h>
#include <stdlib.h>

int main() {
    char input_goal[20], input_collect[20];
    float goal, collect;
    int day;

    printf("Enter your goal amount: ");
    fgets(input_goal, 20, stdin);
    

    while (1) {
        printf("Enter money collected today: ");
        fgets(input_collect, 20, stdin);

        goal = atoi(input_goal);
        collect = atoi(input_collect);

        collect++;

        float remain = goal - collect;

        day++;

        printf("Total money collected up to day %d is %.2f You need %.2f more.\n", day, collect, remain);

        if (remain == goal) {
            printf("Congratulations! You take %d days to reach your goal.\n", day);
            break;
        }
    }

    return 0;
}