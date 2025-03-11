#include <stdio.h>

int main()
{

    int a = 25;
    printf("%d\n", a);
    printf("%p\n", &a);
    int *x = &a;
    printf("%p\n", x);
    printf("%p\n", &x);
    int *z = &x;
    printf("%p\n", z);
    printf("%d\n", *z);
    int **y = &x;
    printf("%p\n", y);
    printf("%d\n", *y);
    printf("%d\n", **y);
    return 0;
}
