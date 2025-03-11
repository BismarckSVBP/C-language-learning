
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[12] = "Abhay ";
    char s2[] = "Kumar";
    strcat(s1, s2);
    printf("%s\n", s1);
    printf("%s\n", s2);
    // s2[0] = 'M';
    // printf("%s\n", s1);
    // printf("%s\n", s2);
    return 0;
}