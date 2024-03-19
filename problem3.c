/*
WAP that will take n integer numbers into an array, and then sum up all the even integers in that
array.
Sample input    Sample output
5
1 2 3 4 5
                    6
6
2 8 3 9 0 1
                    10
*/
/*WAP that will take n integer numbers into an array, and then sum up all the integers in
that array.
Sample input        Sample output
5

1 2 3 4 5
                            15
6

2 8 3 9 0 1
                            23  */

#include <stdio.h>
int main()
{
    int n, i, j, sum = 0;

    printf("Enter the Array Size : ");
    scanf("%d", &n);
    int Arr[n];

    printf("Enter %d elements of array : \n", n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &Arr[i]);
        if (Arr[i] % 2 == 0)
        {
            sum += Arr[i];
        }
    }
    printf("Sum of All elements : %d ", sum);

    return 0;
}