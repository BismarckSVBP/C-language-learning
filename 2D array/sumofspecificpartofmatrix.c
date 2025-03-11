#include <stdio.h>

int main()
{

    int m, n;

    printf("Enter Number of rows: ");
    scanf("%d", &m);

    printf("Enter Number of columns: ");
    scanf("%d", &n);

    int crr[m][n];
    int sum = 0;

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


    int a1, b1, a2, b2;

    printf("Enter Starting row's Number : ");
    scanf("%d", &a1);

    printf("Enter Starting column's Number : ");
    scanf("%d", &b1);

    printf("Enter Starting row's Number : ");
    scanf("%d", &a2);

    printf("Enter Starting column's Number : ");
    scanf("%d", &b2);

    for (int k = a1 - 1; k <= a2 - 1; k++)
    {
        for (int l = b1 - 1; l <= b2 - 1; l++)
        {
            printf("%d ", crr[k][l]);
                sum = sum +crr[k][l];
        }
         printf("\n");
    }
    printf("%d", sum);

 
    return 0;
}
