#include <stdio.h>
#include <string.h>
int main()
{
    char str[5];
    printf("Enter a string : ");
    // scanf("%s", str);// only the first word will be considered

    scanf("%[^\n]s", str); // entire sentence can be inputed
    // or
    //  gets(str);//entire sentence can be inputed
    printf("The taken input is : %s", str);

    //  char str[40] ,str2[40];
    // printf("Enter a string : ");
    // scanf("%s %s",str,str2);// only the two word will be considered
    // printf("The taken input is : %s %s",str,str2);

    return 0;
}
