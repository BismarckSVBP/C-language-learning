// method-1

// #include <stdio.h>

// int main()
// {
//     int x = 65;
//     printf("%d\n", x);
//     char ch = (char)x;
//     printf("%c\n", ch);

//     return 0;
// }

// method-2

#include <stdio.h>

int main()
{
    char ch = 'A';
    printf("%c\n", ch);
    int x = (int)ch;
    printf("%d\n", x);

    return 0;
}
