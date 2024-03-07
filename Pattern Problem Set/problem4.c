/*WAP that will print a pattern based on the input integer n. Please see the sample input output.
    Sample input	Sample output
        3	        __1
                    _22
                    333
*/
#include <stdio.h>
int main()
{
    int i, j, n, k;
    printf("Enter a value for a pattern : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf("_");
        }
        
        for (k = 1;k <= i; k++)
        {
            printf("%d",i);
        
        }
        printf("\n");
    }
    return 0;
}