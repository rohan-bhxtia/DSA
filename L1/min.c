// minimum of two numbers
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter number a:");
    scanf("%d", &a);
    printf("enter number b:");
    scanf("%d", &b);
    if (a < b)
        printf("%d is smaller", a);
    else
        printf("%d is smaller", b);
    return 0;
}