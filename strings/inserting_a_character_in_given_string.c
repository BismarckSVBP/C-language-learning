// //by me
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s1[] = "ABHAY";
//     int i = 0;
//     int size = 0;
//     while (s1[i] != '\0')
//     {
//         size++;
//         i++;
//     }
//     printf("%d\n", size);

//     for (int j = 0; j <= size; j++)
//     {
//         if (j < 2)
//         {
//             printf("%c", s1[j]);
//         }
//         else if (j == 2)
//         {

//             printf("%c", 'C');
//         }
//         else
//         {
//             printf("%c", s1[j - 1]);
//         }
//     }

//     return 0;
// }




// by master(with some modification by me)



// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s1[] = "ABHAY";
//     int i = 0;
//     int size = 0;
//     while (s1[i] != '\0')
//     {
//         size++;
//         i++;
//     }
//     printf("%d\n", size);

//     for (int j = size - 1; j >= 2; j--)
//     {

//         s1[j + 1] = s1[j];
//     }
//     s1[2] = 'k';
//     printf("%s", s1);

//     return 0;
// }


//by master (proper method)

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[15] = "ABHAY";
   for (int j =5; j >= 2; j--)
    {

        s1[j + 1] = s1[j];
    }
    s1[2] = 'k';
    printf("%s", s1);

    return 0;
}
