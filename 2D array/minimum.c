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
    int min = INT_MAX;
    //   int min = crr[0][0];
    int a, b;
    for (int k = 0; k < m; k++)
    {
        for (int l = 0; l < n; l++)
        {

            printf("Enter crr[%d][%d] : ", k + 1, l + 1);
            scanf("%d", &crr[k][l]);
            if (min > crr[k][l])
            {
                a = k+1;
                b = l+1;
                min = crr[k][l];
                
            }
        }
    }
    printf("The minimum element is %d & it's location is (%d,%d).", min, a, b);
    return 0;
}