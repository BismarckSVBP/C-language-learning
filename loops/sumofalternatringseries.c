// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int sum = 0, i;
//     if (n % 2 != 0)
//     {

//         for (i = 1; i <= n; i = i + 2)
//         {i =i;
//         }
//     }
//     else
//     {
//         for (i = 2; i <= n; i = i + 1)
//         {
//             i = -i;
//         }
//     }
//     printf("%d", sum + i);
// }
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0, i;

    for (i = 1; i <= n; i = i + 1)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
        else
        {
            sum = sum - i;
        }
        
    }

    printf("%d", sum);
    return 0;
}