/*
WAP that will take n integers into array A and m positive integers into array B. Now find
the intersection (set operation) of array A and B.
Sample input        Sample output
8
7 8 1 5 2 6 4 3
6
1 3 6 0 9 2
                    1 2 6 3
3
1 2 3
2
4 5
                    Empty set
*/

#include <stdio.h>
int main()
{
    int i, j, k, n, m;
    printf("Print Array size of A set : ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter the Array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Print Array size of B set : ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter the Array elements : ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("Intersection of Array elements : %d ", arr1[i]);
            }
            else
            {
                printf("Empty set\n");
              
            }
        }
    }

    return 0;
}