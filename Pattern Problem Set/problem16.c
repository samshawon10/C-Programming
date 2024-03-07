#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Upper half
    for (i = 1; i <= n; i++) {
        // Print leading underscores
        for (j = 1; j < i; j++) {
            printf("_");
        }

        // Print asterisk
        printf("*");

        // Print middle underscores
        for (j = 1; j <= 2 * (n - i) - 1; j++) {
            printf("_");
        }

        // Print asterisk
        if (i != n)
            printf("*");

        // Print trailing underscores
        for (j = 1; j < i; j++) {
            printf("_");
        }

        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {
        // Print leading underscores
        for (j = 1; j < i; j++) {
            printf("_");
        }

        // Print asterisk
        printf("*");

        // Print middle underscores
        for (j = 1; j <= 2 * (n - i) - 1; j++) {
            printf("_");
        }

        // Print asterisk
        if (i != n)
            printf("*");

        // Print trailing underscores
        for (j = 1; j < i; j++) {
            printf("_");
        }

        printf("\n");
    }

    return 0;
}
