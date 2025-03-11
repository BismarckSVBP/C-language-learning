#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            printf("#");
        }
        for (int k = 65; k <= 64 + i; k++)
        {
            printf("%c", (char)k);
        }

        for (int l = 65; l <= (64 + i) - 1; l++)
        {
            printf("%c", (char)((64 + i) - (l - 64)));
        }
        printf("\n");
    }
    return 0;
}
