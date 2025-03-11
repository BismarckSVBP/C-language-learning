#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = {'A', 'B', 'H', 'A', 'Y', ' ', 'I', 'S', ' ', 'B', 'I', 'S', 'M', 'A', 'R', 'C', 'K', '\0'}; // declearation of a string(method-1)
    int  j = 0, p = 0;
    while (str[j] != '\0')
    {
        printf("%c", str[j]);
        j++;
    }
    printf("\n\n\n");

    // or

    printf("%s", str);
    //

    printf("\n\n");
    //or
    puts(str);

puts("HELLO EVERYONE");

    return 0;
}
