/*
WAP that will take n integer numbers into an array, and then sum up all the even indexed
integers in that array.
*Sample input           Sample output
5
1 2 3 4 5
                            9
6
2 8 3 9 0 1
                            5
*/



#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the Array Size : ");
    scanf("%d", &n);
    int Arr[n];

    printf("Enter %d elements of array : \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &Arr[i]);
        if (i % 2 == 0) {                           // Checking if the index is even
            sum += Arr[i];
        }
    }

    printf("Sum of Even Indexed Elements: %d\n", sum);

    return 0;
}
