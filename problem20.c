/*
WAP that will take n integers into an array A and m positive integers into array B. Now
find the union (set operation) of array A and B.
Sample input            Sample output
8
7 8 1 5 2 6 4 3
6
1 3 6 0 9 2
                            7 8 1 5 2 6 4 3 0 9
3
1 2 3
2
4 5                         1 2 3 4 5
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
    printf("Union of A and B sets: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            printf("%d ", arr2[i]);
            flag = 0;
        }
    }
    return 0;
}