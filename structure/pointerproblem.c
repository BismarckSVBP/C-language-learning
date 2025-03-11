#include <stdio.h>

int main()
{
    typedef int *pointer;

    int x = 7;
    int y = 6;
    pointer a = &x, b = &y;
    printf("%p\n", &x);
    printf("%p\n", &y);
    printf("%p\n", a);
    printf("%p", b);
    return 0;
}