#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter Number of element : ");
    scanf("%d", &n);
    // malloc
    int *ptr = (int *)malloc(n * sizeof(int));

    
    // calloc
    // int *ptr = (int *)calloc(n, sizeof(int));

    int *ptr2 = ptr;
    int *ptr3 = ptr;
    int *ptr4 = ptr;
    int *ptr5 = ptr;
    int *ptr6 = ptr;

    for (int i = 1; i <= n; i++)
    {
        printf("Enter %dth elements : ", i);
        scanf("%d", &(*ptr));
        ptr++;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", (*ptr2));
        ptr2++;
    }
    printf("\n");

    // free
    free(ptr);

    for (int i = 1; i <= n - 2; i++)
    {
        printf("Enter %dth elements : ", i);
        scanf("%d", &(*ptr3));
        ptr3++;
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", (*ptr4));
        ptr4++;
    }
    printf("\n");

    // realloc
    ptr = realloc(ptr, (n + 4) * sizeof(int));
    for (int i = 1; i <= n + 4; i++)
    {
        printf("Enter %dth elements : ", i);
        scanf("%d", &(*ptr5));
        ptr5++;
    }

    printf("\n");
    for (int i = 1; i <= n + 4; i++)
    {
        printf("%d ", (*ptr6));
        ptr6++;
    }
    return 0;
}