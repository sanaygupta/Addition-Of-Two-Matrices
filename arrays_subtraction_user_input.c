#include <stdio.h>

int main() {
    // Declaring 3x3 matrices
    int sensor1[3][3];
    int sensor2[3][3];
    int resultant[3][3];
    int i, j;

    // 1. Input for Sensor 1 Matrix
    printf("=== Enter 3x3 Matrix for Sensor 1 ===\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &sensor1[i][j]);
        }
    }

    // 2. Input for Sensor 2 Matrix
    printf("\n=== Enter 3x3 Matrix for Sensor 2 ===\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &sensor2[i][j]);
        }
    }

    // 3. Matrix Subtraction
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            resultant[i][j] = sensor1[i][j] - sensor2[i][j];
        }
    }

    // 4. Displaying Perfectly Aligned Output
    printf("\n=========================================================================================\n");
    printf("      Sensor 1 (3x3)          -          Sensor 2 (3x3)          =       Resultant (3x3)   \n");
    printf("=========================================================================================\n");

    for(i = 0; i < 3; i++) {
        // Print Row i of Sensor 1 (%4d ensures 4-space width for alignment)
        printf("[ ");
        for(j = 0; j < 3; j++) {
            printf("%4d ", sensor1[i][j]);
        }
        printf("]");

        // Print '-' operator on middle row (i = 1)
        if(i == 1) printf("   -   ");
        else       printf("       ");

        // Print Row i of Sensor 2
        printf("[ ");
        for(j = 0; j < 3; j++) {
            printf("%4d ", sensor2[i][j]);
        }
        printf("]");

        // Print '=' operator on middle row (i = 1)
        if(i == 1) printf("   =   ");
        else       printf("       ");

        // Print Row i of Resultant Matrix
        printf("[ ");
        for(j = 0; j < 3; j++) {
            printf("%4d ", resultant[i][j]);
        }
        printf("]\n");
    }
    printf("=========================================================================================\n");

    return 0;
}
