/*
WAP that will take n integers into an array, and then search a number into that array. If found then print its index. If not found then print “NOT FOUND”.

Sample input	    Sample output
8
7 8 1 3 2 6 4 3
3	                FOUND at index position: 3, 7
8
7 8 1 3 2 6 4 3
5	                 NOT FOUND


*/

#include <stdio.h>

int main()
{
    int n, search_num;

    printf("Enter size of Array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the integers Value %d : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &search_num);

    int flag = 0;
    printf("Sample output:\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search_num)
        {
            printf("FOUND at index position: %d\n", i);
            flag = 1;
        }
    }
    if (!flag)
    {
        printf("NOT FOUND\n");
    }

    return 0;
}
