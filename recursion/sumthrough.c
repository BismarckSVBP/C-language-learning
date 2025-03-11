// #include <stdio.h>

// void sum(int x, int n)
// {
//     if (n == 0)
//     {
//         printf("%d", x);
//         return;
//     }

//     x = x + n;
//     sum(x, n - 1);
//     return;
// }

// int main()
// {

//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     sum(0, n);

//     return 0;
// }

// by master

#include <stdio.h>

// void sum(int x, int n)
// {
//     if (n == 0)
//     {
//         printf("%d", x);
//         return;
//     }

//     sum(x + n, n - 1);
//     return;
// }

int sum(int n)
{
    if (n == 0 || n==1)
    {
        return n;
    }
    int sumation = n + sum(n - 1);

    return sumation;
}

int main()
{

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int add = sum(n);
    printf("%d", add);

    return 0;
}