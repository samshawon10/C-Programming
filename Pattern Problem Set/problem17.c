#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Upper half of the diamond
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf("_");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("$");
            } else {
                printf("_");
            }
        }
        for (j = 1; j <= n - i; j++) {
            printf("_");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf("_");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("$");
            } else {
                printf("_");
            }
        }
        for (j = 1; j <= n - i; j++) {
            printf("_");
        }
        printf("\n");
    }

    return 0;
}
