// #include <stdio.h>
// int factorial(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }//base case
//         return n * factorial(n - 1);
//
// }
// int main()
// {
//     int n;
//     printf("Enter A Number : ");
//     scanf("%d", &n);
//     int a = factorial(n);
//     printf("%d", a);
//     return 0;
// }

#include <stdio.h>
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    } // base case
    else
    {
        int resAns = n * factorial(n - 1);
        return resAns;
    }
}

int main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d", &n);
    int a = factorial(n);
    printf("%d", a);
    return 0;
}
