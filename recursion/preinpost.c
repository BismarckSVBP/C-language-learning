#include <stdio.h>

void preInpost(int n)
{
    if (n == 0)
        return;
    printf("Pre %d\n", n);
    preInpost(n - 1);

    printf("In %d\n", n);
    preInpost(n - 1);
    printf("Post %d\n", n);
    return;
}
int main()
{
    int x;
    printf("Enter a Number :");
    scanf("%d", &x);
    preInpost(x);

    return 0;
}