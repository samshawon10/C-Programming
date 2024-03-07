#include <stdio.h>
int main()
{

    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == (n / 2 + 1))

            {
                printf("H");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}