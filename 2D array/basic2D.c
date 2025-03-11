#include <stdio.h>

int main()
{

    // // intialisation & declearation of a 2D array
    // // 1 2 3
    // // 4 5 6

    // int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // // 7  8  9
    // // 10 11 12
    // int brr[2][3];
    // brr[0][0] = 7;
    // brr[0][1] = 8;
    // brr[0][2] = 9;
    // brr[1][0] = 10;
    // brr[1][1] = 11;
    // brr[1][2] = 12;

    // // printing of a 2D array

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf(" %d  ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    // for (int k = 0; k < 2; k++)
    // {
    //     for (int l = 0; l < 3; l++)
    //     {
    //         printf("%d  ", brr[k][l]);
    //     }
    //     printf("\n");
    // }
    printf("\n");

    // taking input in 2d array

    // int crr[2][3];
    // for (int k = 0; k < 2; k++)
    // {
    //     for (int l = 0; l < 3; l++)
    //     {
    //         printf("Enter crr[%d][%d] : ", k + 1, l + 1);
    //         scanf("%d", &crr[k][l]);
    //     }
    // }
    // printf("\n");

    // printf("\n");

    // for (int k = 0; k < 2; k++)
    // {
    //     for (int l = 0; l < 3; l++)
    //     {
    //         printf("%d ", crr[k][l]);
    //     }
    //     printf("\n");
    // }

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
            printf("Enter crr[%d][%d] : ", k + 1, l + 1);
            scanf("%d", &crr[k][l]);
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
