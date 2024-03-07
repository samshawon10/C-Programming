/*WAP that will print a pattern based on the input integer n. Please see the sample input output.
    Sample input	Sample output
        3	        123
                    234
                    345
*/
#include <stdio.h>
int main()
{
    int i, j, n, k;
    printf("Enter a value for a pattern : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        k = i;
        for (j = 1; j <= n; j++, k++)
        {

            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}