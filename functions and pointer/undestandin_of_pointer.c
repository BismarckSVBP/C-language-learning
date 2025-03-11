
// #include <stdio.h>

// int add(int x, int y)
// {
//     int sum = x + y;

// printf("The sum of %d & %d is %d.", x, y, sum);
//     return sum;
// }

// int main()
// {
//     int m, n;
//     printf("Enter 1st Number : ");
//     scanf("%d", &m);

//     printf("Enter 2nd Number : ");
//     scanf("%d", &n);

//     int sum = add(m, n);

//     printf("The sum of %d & %d is %d.", m, n, sum);
//     return 0;
// }











#include <stdio.h>

int add(int x, int y)
{
    // int sum = x + y;
    x += 5;
     printf("The 1st element is changes in %d in add function .", x);
    // printf("The sum of %d & %d is %d.", x, y, sum);
    return x;
}

int main()
{
    int m, n;
    printf("Enter 1st Number : ");
    scanf("%d", &m);

    printf("Enter 2nd Number : ");
    scanf("%d", &n);

    // int sum =
    add(m, n);

    printf("The 1st element is changes in %d in main function .", m);
    // printf("The sum of %d & %d is %d.", m, n, sum);
    return 0;
}







// #include <stdio.h>

// int add(int *x, int *y)
// {
//     int sum = *x + *y;
//     return sum;
// }

// int main()
// {
//     int n, m;
//     printf("Enter 1st Number : ");
//     scanf("%d", &n);

//     printf("Enter 2nd Number : ");
//     scanf("%d", &m);

//     int sum = add(&m, &n);
//     printf("The sum of %d & %d is %d.", n, m, sum);
//     return 0;
// }
