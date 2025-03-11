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
    int temp = 0;
    int x;

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
            sum = sum + crr[k][l];
        }

        printf("\n");

        if (temp < sum)
        {
            temp = sum;
            x = k + 1;
        }
        sum = 0;
    }
    printf("The row having maximum sum of it's element is %d & it is %d", x, temp);

    return 0;
}
