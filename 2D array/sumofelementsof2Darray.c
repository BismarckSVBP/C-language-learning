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


    
    // for (int k = 0; k < m; k++)
    // {
    //     for (int l = 0; l < n; l++)
    //     {

    //         printf("Enter crr[%d][%d] : ", k + 1, l + 1);
    //         scanf("%d", &crr[k][l]);
    //     }
    // }
    // for (int k = 0; k < m; k++)
    // {
    //     for (int l = 0; l < n; l++)
    //     {
    //         sum = sum + crr[k][l];
    //     }
    // }
    // printf("%d", sum);

//or

     for (int k = 0; k < m; k++)
    {
        for (int l = 0; l < n; l++)
        {
            
            printf("Enter crr[%d][%d] : ", k + 1, l + 1);
            scanf("%d", &crr[k][l]);
            sum = sum +crr[k][l];
           
        }
    }
    return 0;
}
