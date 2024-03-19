/* WAP that will take n alphabets into an array, and then count number of vowels in that array.

Sample input	                                         Sample output
7
AKIOUEH	                                                      Count: 5

*/

#include <stdio.h>
int main()
{
    int n, total_vowel = 0;
    printf("Enter the number of alphabets : \n");
    scanf("%d", &n);
    char alphabets[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &alphabets[i]);
    }
    for (int i = 0; i < n; i++)
    {
        char value_of_alphabets = alphabets[i];
        if (value_of_alphabets == 'A' || value_of_alphabets == 'E' || value_of_alphabets == 'I' || value_of_alphabets == 'O' || value_of_alphabets == 'U' || value_of_alphabets == 'a' || value_of_alphabets == 'e' || value_of_alphabets == 'i' || value_of_alphabets == 'o' || value_of_alphabets == 'u')

        {
            total_vowel++;
        }
    }
    printf("The total sum of vowel = %d", total_vowel);

    return 0;
}