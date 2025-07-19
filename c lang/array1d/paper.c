#include <stdio.h>

int main() {
    int num = 10;  // 1. Initialize num with 10, the starting number
    int i, j;      // 2. Declare loop counters

    // 3. Outer loop to handle number of rows (4 rows in total)
    for(i = 1; i <= 4; i++) {

        // 4. Inner loop to print 'i' numbers in each row
        for(j = 1; j <= i; j++) {

            printf("%d", num);  // 5. Print the current number
            num--;              // 6. Decrease num by 1 after printing
        }

        printf("\n");  // 7. Move to the next line after each row
    }

    // 8. Program ends successfully
    return 0;
}
