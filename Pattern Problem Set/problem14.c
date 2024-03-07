#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Iterate through each row
    for (i = 1; i <= n; i++) {
        // Print asterisks (*) or underscores (_) based on the position
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n || (i == (n + 1) / 2 && j != 1 && j != n)) {
                printf("*");
            } else {
                printf("_");
            }
        }

        printf("\n");
    }

    return 0;
}
