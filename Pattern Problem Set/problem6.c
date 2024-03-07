
/*WAP that will print a pattern based on the input integer n. Please see the sample input output.
    Sample input	Sample output
        3	        1
                    12
                    123
*/

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter a Value for pattern : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}