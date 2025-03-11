#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {

            printf("Not a prime number");
            break;
        }
        else
        {
            printf("A prime number");
            break;
        }
    }

    return 0;
}
