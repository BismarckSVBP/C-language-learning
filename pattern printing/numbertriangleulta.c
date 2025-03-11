#include <stdio.h>

int main()
{
    int m, n;
   
    printf("Enter number of Rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n+1-i; j++)
        {
            printf("%d",2*j-1);
        }
        printf("\n");
    }

    return 0;
}
