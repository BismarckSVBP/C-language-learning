#include <stdio.h>
void pattern()
{
    for (int i = 2; i <= 3; i++)
    {

        for (int j = 1; j <= i - 1; j++)
        {

            printf("  ");
        }
        printf("*");

        printf("\n");
    }
    for (int i = 2; i >= 1; i--)
    {

        for (int j = 1; j <= i - 1; j++)
        {

            printf("  ");
        }
        printf("*");

        printf("\n");
    }
    return;
}
int main()
{
    printf("*");
    printf("\n");
    pattern();
    pattern();
    pattern();

    return 0;
}
