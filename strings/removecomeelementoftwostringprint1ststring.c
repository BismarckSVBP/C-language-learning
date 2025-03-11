
#include <stdio.h>
#include <string.h>
int main()
{
    char p, str1[10] = "raam";
    char str2[20] = "kaam";
    int z = 0, y = strlen(str1);
    //   printf("%d",x);
    int x = strlen(str2);
    //   printf("%d",y);
    for (int i = 0; i <= y - 1; i++)
    {

        for (int j = 0; j <= x - 1; j++)
        {
            if (str1[i] == str2[j])
            {
                z = 0;

                break;
            }
            else
            {
                z = 1;
            }
        }
        if (z == 1)
        {
            printf("%c", str1[i]);
        }

        z = 0;
    }
    return 0;
}
