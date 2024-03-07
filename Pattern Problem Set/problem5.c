/*WAP that will print a pattern based on the input integer n. Please see the sample input output.
    Sample input	Sample output
        3	        3
                    32
                    321

*/
#include <stdio.h>
int main()
{
    int i, j, n, k;
    printf("Enter a value for a pattern : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        k = n;
        for (j = 1; j <= i; j++, k--)
        {

            printf("%d",k );
        }
        printf("\n");
    }
    return 0;
}