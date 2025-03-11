#include <stdio.h>
#include <limits.h>
int main()
{
    int m, n;

    printf("Enter Number of rows: ");
    scanf("%d", &m);

    printf("Enter Number of columns: ");
    scanf("%d", &n);
    int crr[m][n];
    int max = INT_MIN;
    int a, b;
    // int max = crr[0][0];
    for (int k = 0; k < m; k++)
    {
        for (int l = 0; l < n; l++)
        {

            printf("Enter crr[%d][%d] : ", k + 1, l + 1);
            scanf("%d", &crr[k][l]);
            if (max < crr[k][l])
            {
                max = crr[k][l];
                a = k + 1;
                b = l + 1;
            }
        }
    }
    printf("The maximum element is %d  & it's location is (%d,%d).", max, a, b);
    return 0;
}