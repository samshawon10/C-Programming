/*
WAP that will take n positive integers into an array A. Now find all the integers that have
an odd index and replace them by 0 in array A. Finally show all elements of array A.
Sample input                Sample output
8
7 8 1 3 2 6 4 3
                            7 0 1 0 2 0 4 0
3
3 2 1
                            3 0 1
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of array A: ");
    scanf("%d", &n);
    int arrA[n];

    printf("Enter the elements of array A: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrA[i]);
    }

    for (int i = 0; i < n; i++)
    {                                           // Replace odd index integers by 0.
        if (i % 2 != 0)
        {
            arrA[i] = 0;
        }
    }

    printf("Modified Array A: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrA[i]);                 // modified Array A
    }
    printf("\n");

    return 0;
}