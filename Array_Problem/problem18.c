/*
WAP that will take n integers into an array A. Now remove all duplicates numbers from
that array. Finally print all elements from that array.
Sample input            Sample output
8
2 8 1 3 2 6 4 3
                        2 8 1 3 6 4
3
3 3 3
                        3
4
                        6 7 8 9

*/

#include <stdio.h>
int main()
{
    int i, j, k, n, temp;
    printf("Enter the array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                    n--;
                    j--;
                }
            }
        }
    }
    printf("Array elements : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}