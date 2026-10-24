#include <stdio.h>

int main() {
    // Declaring 3x3 matrices (3 rows and 3 columns)
    int sensor1[3][3];
    int sensor2[3][3];
    int resultant[3][3];
    int i, j;

    // 1. Input for Sensor 1 Matrix (3x3 = 9 elements)
    printf("=== Enter 3x3 Matrix for Sensor 1 ===\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &sensor1[i][j]);
        }
    }

    // 2. Input for Sensor 2 Matrix (3x3 = 9 elements)
    printf("\n=== Enter 3x3 Matrix for Sensor 2 ===\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &sensor2[i][j]);
        }
    }

    // 3. Nested for loops to calculate 3x3 matrix addition
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            resultant[i][j] = sensor1[i][j] + sensor2[i][j];
        }
    }

    // 4. Displaying Output: LHS (Sensor 1 + Sensor 2) = RHS (Resultant)
    printf("\n=========================================================================\n");
    printf("     Sensor 1 (3x3)      +      Sensor 2 (3x3)      =    Resultant (3x3)   \n");
    printf("=========================================================================\n");

    for(i = 0; i < 3; i++) {
        // Print Row i of Sensor 1
        printf("[ ");
        for(j = 0; j < 3; j++) {
            printf("%2d ", sensor1[i][j]);
        }
        printf("]");

        // Print '+' operator centered on middle row (i = 1)
        if(i == 1) printf("   +   ");
        else       printf("       ");

        // Print Row i of Sensor 2
        printf("[ ");
        for(j = 0; j < 3; j++) {
            printf("%2d ", sensor2[i][j]);
        }
        printf("]");

        // Print '=' operator centered on middle row (i = 1)
        if(i == 1) printf("   =   ");
        else       printf("       ");

        // Print Row i of Resultant Matrix on RHS
        printf("[ ");
        for(j = 0; j < 3; j++) {
            printf("%2d ", resultant[i][j]);
        }
        printf("]\n");
    }
    printf("=========================================================================\n");

    return 0;
}
