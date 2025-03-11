// // // by me
// // #include <stdio.h>

// // int main()
// // {

// //     int m, n;

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
// //         for (int l = 0; l < n; l++)
// //         {

// //             printf("%d ", crr[n - l - 1][k]);
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

// // by master method-1

// #include <stdio.h>

// int main()
// {

//     int m, n, temp;

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
// //transpose

//     for (int k = 0; k < n; k++)
//     {
//         for (int l = 0; l < k; l++)
//         {
//             temp = crr[l][k];
//             crr[l][k] = crr[k][l];
//             crr[k][l] = temp;
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
// //rotate
//     for (int k = 0; k < m; k++)
//     {
//         for (int l = n - 1; l >= 0; l--)
//         {
//             printf("%d ", crr[k][l]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // by master method-2

#include <stdio.h>

int main()
{

    int m, n;

    // int crr[3][3] = {{1, 2, 3}, {4, 5, 6},{7,8,9}};

    printf("Enter Number of rows: ");
    scanf("%d", &m);

    printf("Enter Number of columns: ");
    scanf("%d", &n);
    int crr[m][n];
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
    // transpose
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < k; l++)
        {

            int temp = crr[l][k];
            crr[l][k] = crr[k][l];
            crr[k][l] = temp;
        }
        printf("\n");
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
    // //rotate
    for (int k = 0; k < m; k++)
    {
        int l = 0;
        int j = n - 1;
        while (l < j)
        {

            int temp = crr[k][l];
            crr[k][l] = crr[k][j];
            crr[k][j] = temp;
            l++;
            j--;
        }
    }
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
