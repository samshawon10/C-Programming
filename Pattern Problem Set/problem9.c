/*WAP that will print a pattern based on the input integer n. Please see the sample input output.
    Sample input	Sample output
        3	        101
                    010
                    101
*/

#include <stdio.h>
int main()
{
    int i, j, n, k;
    printf("Enter a value for pattern : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = i, j = 1; j <= n; j++, k++)
        {
            k = k % 2;
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}