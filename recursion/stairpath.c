// //if one step or two step ek sath chal sakte hai



// #include <stdio.h>

// int stair(int n)
// {
//     if (n == 1 || n == 2)
//         return n;
//     return stair(n - 1) + stair(n - 2);
// }
// int main()
// {
//     int n;
//     printf("Enter Number :");
//     scanf("%d", &n);
//     int p = stair(n);

//     printf("%d", p);
//     return 0;
// }












//if one step or two step  or three step ek sath chal sakte hai



#include <stdio.h>

int stair(int n)
{
    if (n == 1 || n == 2)
        return n;
        if(n==3) return 4;
    return stair(n - 1) + stair(n - 2)+stair(n-3);
}
int main()
{
    int n;
    printf("Enter Number :");
    scanf("%d", &n);
    int p = stair(n);

    printf("%d", p);
    return 0;
}
