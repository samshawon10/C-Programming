/* WAP that will take n integer numbers as input in an array and then insert a number in a position specified by the user in the array.

Sample input	                                              Sample output
10
9 11 34 23 16 15 2 37 89 54
number: 78 
position: 4	                                     9 11 34 23 78 16 15 2 37 89 54 */

#include <stdio.h>

int main() {
    int n, position, number;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the number to insert: ");
    scanf("%d", &number);
    printf("Enter the position to insert: ");
    scanf("%d", &position);
    for (int i = n; i > position; i--) {
        array[i] = array[i - 1];
    }
    array[position] = number;
    printf("Array after insertion:\n");
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
