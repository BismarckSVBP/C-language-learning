#include <stdio.h>

int main()
{

    int m, n;
    // int temp;
    // int crr[3][3] = {{1, 2, 3}, {4, 5, 6},{7,8,9}};

    printf("Enter Number of rows: ");
    scanf("%d", &m);

    printf("Enter Number of columns: ");
    scanf("%d", &n);
    int crr[m][n];
    int arr[n][m];
    for (int k = 0; k < m; k++)
    {
        for (int l = 0; l < n; l++)
        {
            printf("Enter crr[%d][%d] : ", k + 1, l + 1);
            scanf("%d", &crr[k][l]);
        }
    }
    printf("\n");

    for (int k = 0; k < m; k++)
    {
        for (int l = 0; l < n; l++)
        {

            printf("%d ", crr[k][l]);
        }
        printf("\n");
    }

    printf("\n");

    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < m; l++)
        {

            arr[k][l] = crr[l][k];
            printf("%d ", arr[k][l]);
        }
        printf("\n");
    }

    return 0;
}
