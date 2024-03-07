#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Iterate through each row
    for (i = 1; i <= n; i++) {
        // Print numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print underscores
        for (j = 1; j <= 2 * (n - i); j++) {
            printf("_");
        }

        // Print numbers from i down to 1
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
