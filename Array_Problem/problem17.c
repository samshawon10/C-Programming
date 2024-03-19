/*
WAP that will take n integers into an array A. Now sort them in ascending order within
that array. Finally show all elements of array A.
Reference: http://en.wikipedia.org/wiki/Bubble_sort
Sample input            Sample output
8
7 8 1 3 2 6 4 3
                            1 2 3 3 4 6 7 8
3
3 2 1
                            1 2 3
*/

#include <stdio.h>
int main()
{
    int i, j, n, temp;
    printf("Enter Array size : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter Array of  %d elements : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf(" Array elements is now : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}





// decending order Array.


// #include <stdio.h>
// int main()
// {
//     int i, j, n, temp;
//     printf("Enter Array size : ");
//     scanf("%d", &n);
//     int arr[n];

//     printf("Enter Array of  %d elements : ", n);
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (i = 0; i < n; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     printf(" Array elements is now : ");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }