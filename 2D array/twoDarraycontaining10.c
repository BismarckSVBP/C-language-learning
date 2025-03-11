#include <stdio.h>

int main()
{

    int m, n;

    printf("Enter Number of rows: ");
    scanf("%d", &m);

    printf("Enter Number of columns: ");
    scanf("%d", &n);


    
    int crr[m][n];
    for (int k = 0; k < m; k++)
    {
        for (int l = 0; l < n; l++)
        {
            crr[k][l] = 10;
        }
    }
    printf("\n");

    printf("\n");

    for (int k = 0; k < m; k++)
    {
        for (int l = 0; l < n; l++)
        {
            printf("%d ", crr[k][l]);
        }
        printf("\n");
    }

    return 0;
}
