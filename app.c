#include <stdio.h>
#include <stdlib.h>
#include <string.h> // For strcmp

void printUsageMessage(char *programName) {
    printf("Usage: %s [a num1 num2] [s num1 num2] [d num1 num2] [m num1 num2]\n", programName);
    printf("Options:\n");
    printf("  a num1 num2\tAddition operation\n");
    printf("  s num1 num2\tSubtraction operation\n");
    printf("  d num1 num2\tDivision operation\n");
    printf("  m num1 num2\tMultiplication operation\n");
}

int main(int argc, char *argv[]) {
    // Check if no arguments are provided
    if (argc < 2) {
        printUsageMessage(argv[0]);
        return 1;
    }

    // Loop through command-line arguments
    for (int i = 1; i < argc; i += 3) {
        // Ensure there are enough arguments for the operation
        if (i + 2 < argc) {
            // Addition switch
            if (strcmp(argv[i], "a") == 0) {
                float num1 = atof(argv[i + 1]);
                float num2 = atof(argv[i + 2]);
                float result = num1 + num2;
                printf("Result: %.2f\n", result);
            }
            // Subtraction switch
            else if (strcmp(argv[i], "s") == 0) {
                float num1 = atof(argv[i + 1]);
                float num2 = atof(argv[i + 2]);
                float result = num1 - num2;
                printf("Result: %.2f\n", result);
            }
            // Division switch
            else if (strcmp(argv[i], "d") == 0) {
                float num1 = atof(argv[i + 1]);
                float num2 = atof(argv[i + 2]);
                // Check for division by zero
                if (num2 != 0) {
                    float result = num1 / num2;
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero\n");
                    return 1;
                }
            }
            // Multiplication switch
            else if (strcmp(argv[i], "m") == 0) {
                float num1 = atof(argv[i + 1]);
                float num2 = atof(argv[i + 2]);
                float result = num1 * num2;
                printf("Result: %.2f\n", result);
            }
            // Invalid operation
            else {
                printf("Error: Invalid operation\n");
                printUsageMessage(argv[0]);
                return 1;
            }
        }
        // Insufficient arguments for the operation
        else {
            printf("Error: Insufficient arguments for the operation\n");
            printUsageMessage(argv[0]);
            return 1;
        }
    }

    return 0;
}