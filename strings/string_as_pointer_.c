#include <stdio.h>

int main()
{

    // char str[] = "ABHAY KUMAR";
    // char *ptr = str; // ptr now points to str[0]

    // // address printing of the string

    // printf("%p\n", &str[0]);
    // printf("%p\n", str); // the address of any string is equal to the address of the first element of the string

    // // string printing of array
    // int i = 0;
    // while (*ptr != '\0')
    // {
    //     printf("%c", str[i]);
    //     // or
    //     // printf("%c", *ptr);
    //     ptr++;
    //     i++;
    // }

    // declearation of a string as pointer

    char *ptr = "Abhay is BismarckSVBP";
    printf("%s", ptr);

    //OR

    int i = 0;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        i++;
        *ptr++;//OR ptr++;
    }

    return 0;
}
