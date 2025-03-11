// // // #include <stdio.h>

// // // int main()
// // // {

// // //     int m;
// // //     int temp1, temp2;
// // //     // int crr[3][3] = {{1, 2, 3}, {4, 5, 6},{7,8,9}};

// // //     printf("Enter Number of rows: ");
// // //     scanf("%d", &m);

// // //     // printf("Enter Number of columns: ");
// // //     // scanf("%d", &n);
// // //     int crr[m][m];
// // // int arr[m][m];
// // //     for (int k = 0; k < m; k++)
// // //     {
// // //         for (int l = 0; l < m; l++)
// // //         {
// // //             printf("Enter crr[%d][%d] : ", k + 1, l + 1);
// // //             scanf("%d", &crr[k][l]);
// // //         }
// // //     }
// // //     printf("\n");

// // //     for (int k = 0; k < m; k++)
// // //     {
// // //         for (int l = 0; l < m; l++)
// // //         {

// // //             printf("%d ", crr[k][l]);
// // //         }
// // //         printf("\n");
// // //     }

// // //     printf("\n");

// // //     for (int k = 0; k < m; k++)
// // //     {
// // //         for (int l = 0; l < m; l++)
// // //         {
// // //             if (k >= l)
// // //             {
// // //                 temp1 = crr[k][l];
// // //             }
// // //             else
// // //             {
// // //                 temp2 = crr[k][l];
// // //             }

// // //             // crr[k][l] = crr[l][k];
// // //             // printf("%d ", crr[k][l]);
// // //         }
// // //         printf("\n");
// // //     }

// // // for (int k = 0; k < m; k++)
// // //     {
// // //         for (int l = 0; l < m; l++)
// // //         {
// // //             if (k >= l)
// // //             {
// // //             arr[l][k]= temp1;
// // //             }
// // //             else
// // //             {
// // //                 arr[l][k]= temp2;
// // //             }

// // //             // crr[k][l] = crr[l][k];
// // //             printf("%d ", arr[l][k]);
// // //         }
// // //         printf("\n");
// // //     }

// // //     return 0;
// // // }

// // #include <stdio.h>

// // int main()
// // {

// //     int m, n;
// //     int temp;
// //     // int crr[3][3] = {{1, 2, 3}, {4, 5, 6},{7,8,9}};

// //     printf("Enter Number of rows: ");
// //     scanf("%d", &m);

// //     printf("Enter Number of columns: ");
// //     scanf("%d", &n);
// //     int crr[m][n];
// //     for (int k = 0; k < m; k++)
// //     {
// //         for (int l = 0; l < n; l++)
// //         {
// //             printf("Enter crr[%d][%d] : ", k + 1, l + 1);
// //             scanf("%d", &crr[k][l]);
// //         }
// //     }
// //     printf("\n");

// //     for (int k = 0; k < m; k++)
// //     {
// //         for (int l = 0; l < n; l++)
// //         {
// //             printf("%d ", crr[k][l]);
// //         }
// //         printf("\n");
// //     }

// //     printf("\n");

// //     for (int k = 0; k < n; k++)
// //     {
// //         for (int l = 0; l < m; l++)
// //         {

// //             if(l>k-1)
// //             {
// //                 temp = crr[l][k];
// //                 crr[l][k] = crr[k][l];
// //                 crr[k][l] = temp;
// //             }

// //             printf("%d ", crr[k][l]);
// //         }
// //         printf("\n");
// //     }
// //     printf("\n");

// //     for (int k = 0; k < m; k++)
// //     {
// //         for (int l = 0; l < n; l++)
// //         {
// //             printf("%d ", crr[k][l]);
// //         }
// //         printf("\n");
// //     }

// //     return 0;
// // }

// #include <stdio.h>

// int main()
// {

//     int m, n;

//     // int crr[3][3] = {{1, 2, 3}, {4, 5, 6},{7,8,9}};

//     printf("Enter Number of rows: ");
//     scanf("%d", &m);

//     printf("Enter Number of columns: ");
//     scanf("%d", &n);
//     int crr[m][n];
//     for (int k = 0; k < m; k++)
//     {
//         for (int l = 0; l < n; l++)
//         {
//             printf("Enter crr[%d][%d] : ", k + 1, l + 1);
//             scanf("%d", &crr[k][l]);
//         }
//     }
//     printf("\n");

//     for (int k = 0; k < m; k++)
//     {
//         for (int l = 0; l < n; l++)
//         {
//             printf("%d ", crr[k][l]);
//         }
//         printf("\n");
//     }

//     printf("\n");

//     for (int k = 0; k < n; k++)
//     {
//         for (int l = 0; l < k; l++)
//         {

//             int temp = crr[l][k];
//             crr[l][k] = crr[k][l];
//             crr[k][l] = temp;
//         }
//         printf("\n");
//     }
//     printf("\n");

//     for (int k = 0; k < m; k++)
//     {
//         for (int l = 0; l < n; l++)
//         {
//             printf("%d ", crr[k][l]);
//         }
//         printf("\n");
//     }  printf("\n");
//     // //rotate
//     for (int k = 0; k < m; k++)
//     {
//         int l = 0;
//         int j = n - 1;
//         while (l < j)
//         {

//             int temp = crr[k][l];
//             crr[k][l] = crr[k][j];
//             crr[k][j] = temp;
//             l++;
//             j--;

//         }
//     }
//     for (int k = 0; k < m; k++)
//     {
//         for (int l = 0; l < n; l++)
//         {
//             printf("%d ", crr[k][l]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{

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

    int minrow = 0, maxrow = m - 1, mincolumn = 0, maxcolumn = n - 1;
    while (0<1)
    {
        if(minrow > maxrow || mincolumn > maxcolumn){
            break;
        }
        else
        {

            for (int p = 0; p <= maxcolumn; p++)
            {
                printf("%d ", arr[minrow][p]);
            }
            minrow++;

            printf("\n");
            for (int q = minrow; q <= maxrow; q++)
            {
                printf("%d ", arr[q][maxcolumn]);
            }
            maxcolumn--;

            printf("\n");
            for (int r = maxcolumn; r >= mincolumn; r--)
            {
                printf("%d ", arr[maxrow][r]);
            }
            maxrow--;

            printf("\n");
            for (int s = maxrow; s >= minrow; s--)
            {
                printf("%d ", arr[s][mincolumn]);
            }
            mincolumn--;

            printf("\n");
        }
    }
  
return 0;
}
