/*WAP that will print a pattern based on the input integer n. Please see the sample input output.
    Sample input	Sample output
        3	        ***
                    ***
                    ***
*/

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter a Value for Row and Coloum same print : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}