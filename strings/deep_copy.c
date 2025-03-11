// #include <stdio.h>
// #include <string.h>
// int main()
// {

//     char *s1 = "Abhay bhai";
//     char *s2;
//     s2 = "Bismarck Bhai";

//     s2 = s1;
//     printf("%s\n", s1);

//     printf("%s\n", s2);

//     s2 = "Bismarck Bhai";

//     printf("%s\n", s2);

//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[12] = "Radhe Radhe";
    char s2[12];
    strcpy(s2, s1);
    printf("%s\n", s1);
    printf("%s\n", s2);
    s2[0] = 'M';
    printf("%s\n", s1);
    printf("%s\n", s2);
    return 0;
}