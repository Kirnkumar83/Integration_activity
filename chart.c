#include <stdio.h>

int main() {
    int start = 1;
    int end = 5;
    int exponent;
    int powerOfTwo;

    for (exponent = start; exponent <= end; exponent++) {
        powerOfTwo = 1;

        // Calculate the power of 2
        for (int i = 0; i < exponent; i++) {
            powerOfTwo *= 2;
        }

        // Print the power of 2
        printf("%d\n", powerOfTwo);
    }

    return 0;
}