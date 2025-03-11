// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int p = 0;
//     while (n > 0)
//     {
//         int x = n % 10;
//         p = (p * 10) + x;

//         n = n / 10;
//     }
//    printf("%d", p);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a=n;
    int p = 0;
    while (a > 0)
    {
        int x = a % 10;
        p = (p * 10) + x;

        a = a / 10;
    }
   
    printf("%d", p+n);
      
      printf("%d", p);
    return 0;
}
