// //by me
// #include <stdio.h>

// int main()
// {

//     // int crr[3][3],p;
//     //  int m=3 ,n=3;
//     //  int arr[3][3] = {{1, 2, 3}, {4, 5, 6},{7,8,9}};
//     //  int brr[3][3] = {{1, 2, 3}, {4, 5, 6},{7,8,9}};
//     int m, n;
//     printf("Enter Number of rows of 1st matrix : ");
//     scanf("%d", &m);

//     printf("Enter Number of columns of 1st matrix: ");
//     scanf("%d", &n);

//     // Input of matrix-1

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

//     // Input of matrix-2
//     int p;
//     printf("Enter Number of rows of 2nd matrix: %d", n);
//     printf("\n");
//     printf("Enter Number of columns of 2nd matrix: ");
//     scanf("%d", &p);
//     int brr[n][p];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < p; j++)
//         {
//             printf("Enter brr[%d][%d] : ", i + 1, j + 1);
//             scanf("%d", &brr[i][j]);
//         }
//     }
//     printf("\n");

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < p; j++)
//         {
//             printf("%d ", brr[i][j]);
//         }
//         printf("\n");
//     }
//     int crr[m][p];
//     int q;

//     for (int i = 0; i < m; i++)
//     {
//         for (int k = 0; k < p; k++)
//         {
//             int sum = 0;
//             for (int j = 0; j < n; j++)
//             {
//                 q = arr[i][j] * brr[j][k];
//                 sum = sum + q;
//             }
//             crr[i][k] = sum;
//         }
//     }


//     //OR



// //     for (int k = 0; k < p; k++)
// //     {
// //         for (int i = 0; i < m; i++)
// //         {
// //             int sum = 0;
// //             for (int j = 0; j < n; j++)
// //             {
// //                 q = arr[i][j] * brr[j][k];
// //                 sum = sum + q;
// //             }
// //             crr[i][k] = sum;
// //         }
// //     }

//     printf("\n");

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < p; j++)
//         {
//             printf("%d ", crr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }






// by master

#include <stdio.h>

int main()
{

    // int crr[3][3],p;
    //  int m=3 ,n=3;
    //  int arr[3][3] = {{1, 2, 3}, {4, 5, 6},{7,8,9}};
    //  int brr[3][3] = {{1, 2, 3}, {4, 5, 6},{7,8,9}};
    int m, n;
    printf("Enter Number of rows of 1st matrix : ");
    scanf("%d", &m);

    printf("Enter Number of columns of 1st matrix: ");
    scanf("%d", &n);

    // Input of matrix-1

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

    // Input of matrix-2
    int o,p;
    printf("Enter Number of rows of 2nd matrix: ");
     scanf("%d", &o);
    printf("Enter Number of columns of 2nd matrix: ");
    scanf("%d", &p);
     int brr[n][p];
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("Enter brr[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &brr[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    //check
    if(o!=n){
        printf("Matrix can not be multiplied.");
    }
    else{

    int crr[m][p];
// multiplicatin starts occuring

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            crr[i][j] = 0;
            //ith row of arr[][],jth column of brr[][]
                        for (int k = 0; k < n; k++)
            {
                crr[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }



    printf("\n");

 printf("The resultant Matrix is : ");
   printf("\n"); 
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }

    }
   
    return 0;
}
