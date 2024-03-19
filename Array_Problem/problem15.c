/*WAP that will take n positive integers into an array A. Now find all the integers that are
divisible by 3 and replace them by -1 in array A. Finally show all elements of array A.

*Sample input               Sample output
8
7 8 1 3 2 6 4 3
                            7 8 1 -1 2 -1 4 -1
3
3 2 1
                            -1 2 1

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
    {                                           // Replace integers divisible by 3 with -1
        if (arrA[i] % 3 == 0)
        {
            arrA[i] = -1;
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
