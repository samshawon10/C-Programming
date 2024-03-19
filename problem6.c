/*
Wap that will take n integer numbers in an array, n different integer numbers in a second
array and put the sum of the same indexed numbers from the two arrays in a third array.
Sample input        Sample output
5
1 2 3 4 5
2 8 3 4 8
                        3 10 6 8 13
8
2 8 3 9 0 1 6 10
5 1 4 8 9 3 1 5
                        7 9 7 17 9 4 7 15
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the Array Size : ");
    scanf("%d", &n);
    
    int Arr1[n], Arr2[n], sum[n];

    printf("Enter %d elements of first array : \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &Arr1[i]);
    }
    
    printf("Enter %d elements of second array : \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &Arr2[i]);
    }
    
    printf("Sum of same index numbers elements: ");
    for (int i = 0; i < n; i++) {
        sum[i] = Arr1[i] + Arr2[i];
        printf("%d ", sum[i]);
    }

    return 0;
}
