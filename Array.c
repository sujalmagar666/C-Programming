#include <stdio.h>

int main() {
    int numbers[5];  // Declare an array of 5 integers

    // Input values into the array
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Output the values
    printf("\nYou entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d = %d\n", i, numbers[i]);
    }

    return 0;
}
