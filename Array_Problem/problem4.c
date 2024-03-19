/*
WAP that will take n floating point numbers into an array, and then find the average of those
numbers.
Sample input                             Sample output
5
1.2 5.6 10.3 4.5 5.2
                                             5.36
8
2.1 8.3 3.7 9.2 0.6 1.5 6.4 10.1
                                             8.38
*/

#include <stdio.h>
int main()
{
    int n;
    float sum = 0, avg = 0;

    printf("Enter the Array Size : ");
    scanf("%d", &n);
    float Arr[n];

    printf("Enter %d elements of array : \n", n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%f", &Arr[i]);
        sum += Arr[i];
    }
    avg = sum / n;
    printf("Avarage of All elements : %.2f ", avg);

    return 0;
}