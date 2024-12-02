if (x == 0 && y == 0) {
        printf("Center\n");
    } else if (x == 0) {
        if (y > 0) {
            printf("North\n");
        } else {
            printf("South\n");
        }
    } else if (y == 0) {
        if (x > 0) {
            printf("East\n");
        } else {
            printf("West\n");
        }
    } else {
        if (y > 0) {
            if (x > 0) {
                printf("North-east\n");
            } else {
                printf("North-west\n");
            }
        } else {
            if (x > 0) {
                printf("South-east\n");
            } else {
                printf("South-west\n");
            }
        }
    }
