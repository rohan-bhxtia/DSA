// sum of numbers from 1-n
#include <stdio.h>
int main()
{
    int x, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for (i = 1; i <= x; i++)
    {
        sum = sum + i;
    }
    printf("Sum of numbers from 1 to %d is: %d \n", x, sum);
    return 0;
}