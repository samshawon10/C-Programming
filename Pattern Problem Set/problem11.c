/*WAP that will print a pattern based on the input integer n. Please see the sample input output.
    Sample input	Sample output
        5	        ___*
                    __***
                    _*****
                    *******
*/
                    
#include <stdio.h>
    int
    main()
{
    int i, j, n, k;
    printf("Enter a value for a pattern : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
