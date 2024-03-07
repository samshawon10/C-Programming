// C Program to print diamond pattern using star *
#include <stdio.h>
int main()
{
    int i, j, n,k;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {

        for (j = 1; j <= n - i; j++)
        {
            printf("_");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = n-1; i >= 1; i--)
    {

        for (j = 1; j <= n - i; j++)
        {
            printf("_");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
