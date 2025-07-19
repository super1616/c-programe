#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to reverse the number
    while (num != 0) {
        remainder = num % 10;               // Get the last digit
        reversed = reversed * 10 + remainder; // Add digit to reversed number
        num = num / 10;                     // Remove the last digit
    }

    // Print the reversed number
    printf("Reversed number = %d\n", reversed);

    return 0;
}
