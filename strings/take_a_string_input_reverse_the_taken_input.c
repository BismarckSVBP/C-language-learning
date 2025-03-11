// by me

// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     char str[50];
//     printf("Enter input : ");
//     scanf("%[^\n]c", str);
//     printf("The taken input is : ");
//     printf("%s", str);
//     printf("\n");
//     int i = 0, j = 50;
//     while (i < j)
//     {
//     char temp = str[j];
//     str[j] = str[i];
//     str[i] = temp;
//     i++;
//     j--;
// }
// for (int i = 0; i <= 50; i++)
// {
//     printf("%c", str[i]);
// }
//     return 0;
// }

// by teacher

#include <stdio.h>
#include <string.h>

int main()
{

    char str[50];
    printf("Enter input : ");
    scanf("%[^\n]c", str);
    printf("The taken input is : ");
    printf("%s", str);
    printf("\n");
    int size = 0, k = 0;
    while (str[k] != '\0')
    {
        k++;
        size++;
    }
    printf("The size of taken input is : %d", size);
    printf("\n");

    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("The reverse of string is : ");
    puts(str);
    return 0;
}