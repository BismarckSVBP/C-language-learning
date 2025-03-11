
// by me 




// #include <stdio.h>

// int main()
// {

//     int m, n;
//     int temp;
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
//         for (int l = 0; l < m; l++)
//         {

//             if (l > k - 1)
//             {
//                 temp = crr[l][k];
//                 crr[l][k] = crr[k][l];
//                 crr[k][l] = temp;
//             }

//             printf("%d ", crr[k][l]);
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
//     }

//     return 0;
// }



// //by teacher(method-1)




// #include <stdio.h>

// int main()
// {

//     int m, n;
//     int temp;
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
//         for (int l = k; l < m; l++)
//         {

         
//                 temp = crr[l][k];
//                 crr[l][k] = crr[k][l];
//                 crr[k][l] = temp;
         

//             printf("%d ", crr[k][l]);
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
//     }

//     return 0;
// }



//by teacher(method-2)

#include <stdio.h>

int main()
{

    int m, n;
    int temp;
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

    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < k; l++)
        {

         
                temp = crr[l][k];
                crr[l][k] = crr[k][l];
                crr[k][l] = temp;
         

            printf("%d ", crr[k][l]);
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

    return 0;
}
