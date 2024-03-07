/*WAP that will print a pattern based on the input integer n. Please see the sample input output.
    Sample input	Sample output
        5	        *****
                    ****
                    ***
                    **
                    *

*/

// #include <stdio.h>
// int main()
// {
//     int i, j, n, k;
//     printf("Enter a value for a pattern : ");
//     scanf("%d", &n);
//     int a = n;
//     for (i = 1; i <= n; i++)
//     {

//         for (j = 1; j <= a; j++)
//         {

//             printf("*");
//         }
//         a--;
//         printf("\n");
//     }
//     return 0;
// }


#include <stdio.h>
int main()
{
    int i, j, n, k;
    printf("Enter a value for a pattern : ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {

        for (j = 0; j < n-i; j++)
        {

            printf("*");
        }

        printf("\n");
    }
    return 0;
}
