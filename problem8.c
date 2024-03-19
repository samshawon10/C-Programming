/*
WAP that will take n integer numbers into an array, and then find the maximum -minimum among them with its index position.

Sample input	        Sample output
5
1  2  3  4  5	            Max: 5, Index: 4
                            Min: 1, Index: 0
6
2  8  3  9  0  1	        Max: 9, Index: 3
                            Min: 0, Index: 4

*/

#include <stdio.h>
int main()
{
    int n, i, max = 0, min = 0;
    printf("Enter the Array size : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
        if (arr[i] < arr[min])
        {
            min = i;
        }
    }
    printf("Max : %d, index : %d \n", arr[max], max);
    printf("Min : %d, index : %d \n", arr[min], min);

    return 0;
}