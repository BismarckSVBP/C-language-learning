// by me with the help of master

// #include <stdio.h>

// int main()
// {

//     // int m = 4, n = 4;
//     // int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//     int m, n;
//     printf("Enter Number of rows of 1st matrix : ");
//     scanf("%d", &m);

//     printf("Enter Number of columns of 1st matrix: ");
//     scanf("%d", &n);

//     int arr[m][n];

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("Enter arr[%d][%d] : ", i + 1, j + 1);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("\n");

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\n");
// //spiral printing
//     int minrow = 0, maxrow = m - 1, mincolumn = 0, maxcolumn = n - 1;
//     while (0 < 1)
//     {

//         for (int p = mincolumn; p <= maxcolumn; p++)
//         {
//             printf("%d ", arr[minrow][p]);
//         }
//         minrow++;
//         if (minrow > maxrow || mincolumn > maxcolumn)
//         {
//             break;
//         }

//         printf("\n");
//         for (int q = minrow; q <= maxrow; q++)
//         {
//             printf("%d ", arr[q][maxcolumn]);
//         }
//         maxcolumn--;
//         if (minrow > maxrow || mincolumn > maxcolumn)
//         {
//             break;
//         }

//         printf("\n");
//         for (int r = maxcolumn; r >= mincolumn; r--)
//         {
//             printf("%d ", arr[maxrow][r]);
//         }
//         maxrow--;
//         if (minrow > maxrow || mincolumn > maxcolumn)
//         {
//             break;
//         }

//         printf("\n");
//         for (int s = maxrow; s >= minrow; s--)
//         {
//             printf("%d ", arr[s][mincolumn]);
//         }
//         mincolumn++;
//         if (minrow > maxrow || mincolumn > maxcolumn)
//         {
//             break;
//         }

//         printf("\n");
//     }

//     return 0;
// }

// // by master method-1

// #include <stdio.h>

// int main()
//  {
// //      int m = 3, n = 4;
// //     int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

//     // int m = 4, n = 4;
//     // int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

//     int m, n;
//     printf("Enter Number of rows of 1st matrix : ");
//     scanf("%d", &m);

//     printf("Enter Number of columns of 1st matrix: ");
//     scanf("%d", &n);

//     int arr[m][n];

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("Enter arr[%d][%d] : ", i + 1, j + 1);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("\n");

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\n");
// //spiral printing
//     int minrow = 0, maxrow = m - 1, mincolumn = 0, maxcolumn = n - 1,count=0,total_element=m*n;
//     while (count<total_element)
//     {

//         for (int p = mincolumn; p <= maxcolumn; p++)
//         {
//             printf("%d ", arr[minrow][p]);
//              count++;
//         }
//         minrow++;

//         if (count>=total_element) break;

//         printf("\n");
//         for (int q = minrow; q <= maxrow; q++)
//         {
//             printf("%d ", arr[q][maxcolumn]);
//              count++;
//         }
//         maxcolumn--;

//         if (count>=total_element) break;

//         printf("\n");
//         for (int r = maxcolumn; r >= mincolumn; r--)
//         {
//             printf("%d ", arr[maxrow][r]);
//              count++;
//         }
//         maxrow--;

//          if (count>=total_element) break;

//         printf("\n");
//         for (int s = maxrow; s >= minrow; s--)
//         {
//             printf("%d ", arr[s][mincolumn]);
//              count++;

//         }
//         mincolumn++;

//         printf("\n");
//     }

//     return 0;
// }

// my master method-2

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
    int minrow = 0, maxrow = m - 1, mincolumn = 0, maxcolumn = n - 1, count = 0, total_element = m * n;
    while (count < total_element)
    {

        for (int p = mincolumn; p <= maxcolumn && count < total_element; p++)
        {
            printf("%d ", arr[minrow][p]);
            count++;
        }
        minrow++;

        printf("\n");
        for (int q = minrow; q <= maxrow && count < total_element; q++)
        {
            printf("%d ", arr[q][maxcolumn]);
            count++;
        }
        maxcolumn--;

        printf("\n");
        for (int r = maxcolumn; r >= mincolumn && count < total_element; r--)
        {
            printf("%d ", arr[maxrow][r]);
            count++;
        }
        maxrow--;

        printf("\n");
        for (int s = maxrow; s >= minrow && count < total_element; s--)
        {
            printf("%d ", arr[s][mincolumn]);
            count++;
        }
        mincolumn++;

        printf("\n");
    }

    return 0;
}
