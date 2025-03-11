// #include <stdio.h>

// int main()
// {

//     int m, n;

//     printf("Enter Number of rows: ");
//     scanf("%d", &m);

//     printf("Enter Number of columns: ");
//     scanf("%d", &n);

//     int crr[m][n];

//     int x = 0, b = 0, c = 0, d = 0;

//     for (int k = 0; k < m; k++)
//     {
//         for (int l = 0; l < n; l++)
//         {

//             printf("Enter crr[%d][%d] in the form of 0 & 1 : ", k + 1, l + 1);
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

//     for (int k = 0; k < m; k++)
//     {
//         for (int l = 0; l < n; l++)
//         {

//             if (0 < crr[k][l])
//             {
//                 b = b + x + 1;
//             }
//         }
//         if (c < b)
//         {
//             c = b;
//             d = k + 1;
//         }

//         b = 0;
//     }
//     if (c > 0)
//     {
//         printf("The row having maximum 1 is %d & it has %dth times 1.", d, c);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{

    int m = 3, n = 3;
    int crr[3][3] = {{0, 0, 1}, {0, 1, 1}, {1, 1, 1}};

    int maxcount = 0, row;
    for (int k = 0; k < m; k++)
    {
        int count = 0;
        for (int l = 0; l < n; l++)
        {

            if (0 < crr[k][l])
            {
                count++;
            }
        }
        if (maxcount < count)
        {
            maxcount = count;
            row = k + 1;
        }
    }

    printf("The row having maximum 1 is %d & it has %dth times 1.", row, maxcount);

    return 0;
}
