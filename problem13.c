/*
WAP that will take n integer numbers as input in an array and then delete a number from a position specified by the user in the array.

Sample input	                 Sample output
10
9 11 34 23 16 15 2 37 89 54
position: 4	                     9 11 34 23 15 2 37 89 54
5
32 14 9 48 6
position: 0	                     14 9 48 6

*/

#include <stdio.h>

int main()
{
    int n, position;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers Value : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the number to delete : ");
    scanf("%d", &position);

    // Deleting the number at the specified position
    if (position < 0 || position >= n)
    {
        printf("Invalid position!\n");
    }
    else
    {
        for (int i = position; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--; // Decrease the size of the array
    }

    // Output the modified array
    printf("Modified array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
