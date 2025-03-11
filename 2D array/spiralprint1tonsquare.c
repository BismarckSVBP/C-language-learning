#include <stdio.h>

int main()
{
    //      int m = 3, n = 4;
    //     int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // int m = 4, n = 4;
    // int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    int m, n;
    printf("Enter Number of rows of 1st matrix : ");
    scanf("%d", &m);

    printf("Enter Number of columns of 1st matrix: ");
    scanf("%d", &n);

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter arr[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    // spiral printing
    int minrow = 0, maxrow = m - 1, mincolumn = 0, maxcolumn = n - 1, count = 1, total_element = m * n;
    while (count < total_element)
    {

        for (int p = mincolumn; p <= maxcolumn && count - 1 < total_element; p++)
        {
            arr[minrow][p] = count;
            printf("%d ", count);
            count++;
        }
        minrow++;

        printf("\n");
        for (int q = minrow; q <= maxrow && count - 1 < total_element; q++)
        {
            arr[q][maxcolumn] = count;
            printf("%d ", count);
            count++;
        }
        maxcolumn--;

        printf("\n");
        for (int r = maxcolumn; r >= mincolumn && count - 1 < total_element; r--)
        {

            arr[maxrow][r] = count;
            printf("%d ", count);
            count++;
        }
        maxrow--;

        printf("\n");
        for (int s = maxrow; s >= minrow && count - 1 < total_element; s--)
        {
            arr[s][mincolumn] = count;
            printf("%d ", count);
            count++;
        }
        mincolumn++;

        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

