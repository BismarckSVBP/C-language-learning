#include <stdio.h>

int main()
{
    // printing of a string
    char brr[5] = {'a', 'b', 'c', 'd', '5'};

    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", brr[i]);
    }

    // printing occurs same as follow above if the number of element is not mentioned

    char krr[] = {'z', 'b', 'c', 'd', '5'};

    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", krr[i]);
    }

    // ascaii value

    char crr[7] = {'A', 'Z', 'a', 'z', '0', '9', '\0'};
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", crr[i]);
    }

    // ascaii value by typecasting

    char a = 'A';
    int x = (int)a;
    printf("%d\n", x);

    // null character --> \n is null character which ascaii value is 0 & on printing null character it will print nothing

    char b = '\0';

    printf("%c\n", b);
    printf("%d\n", b);

    // use of null character & declearation of a string

    char mrr[] = {'A', 'B', 'H', 'A', 'Y', ' ', 'I', 'S', ' ', 'B', 'I', 'S', 'M', 'A', 'R', 'C', 'K', '\0'}; // declearation of a string(method-1)
    int i = 0, j = 0, p = 0;
    while (mrr[j] != '\0')
    {
        printf("%c", mrr[j]);
        j++;
    }
    printf("\n");
    char arr[] = "ABHAY IS BISMARCK\0";
    while (arr[i] != '\0')
    {
        printf("%c", arr[i]);
        i++;
    }
    printf("\n");
    char lrr[] = "ABHAY IS BISMARCK HIS FULL NAME IS BISMARCKSVBP."; // declearation of a string(method-3)  if did not enter \0 in the last of string then computer automatically put it & give results corresponding to it & count \n as last element of the array.

    while (lrr[p] != '\0')
    {
        printf("%c", lrr[p]);
        p++;
    }

    // if declear more spaces greater than character present in the array it will print as same way as it print it right condition.
    printf("\n");
    char frr[50] = "BISMARCK's FULL NAME IS BISMARCKSVBP."; // string has (38+1(\n)=39) character but we decleare 50 character spaces// declearation of a string(method-3)  if did not enter \0 in the last of string then computer automatically put it & give results corresponding to it.

    char brr[5] = {'a', 'b', 'c', 'd', '5'}; // string has (5+0(\n)=5) character  if did not enter \0 in the last of string then computer will not automatically put it & give results unmswanted in this form.

    int f = 0;
    while (frr[f] != '\0')
    {
        printf("%c", frr[f]);
        f++;
    }

    // modification of elements of the string
    printf("\n");
    char err[50] = "BISMARCK's FULL NAME IS BISMARCKSVBP."; // string has (38+1=39) character but we decleare 50 character spaces// declearation of a string(method-3)  if did not enter \0 in the last of string then computer automatically put it & give results corresponding to it.                                                                 // declearation of a string(method-2)
    int e = 0;
    err[0] = 65;
    err[1] = 66;
    err[2] = 'H';
    while (err[e] != '\0')
    {
        printf("%c", e[err]); // we can write e[err] or err[e] or *(err+i) or *(i+err)  to print something
        e++;
    }
    printf("\n");
    int z = 0;
    while (err[z] != '\0')
    {
        printf("%c", *(err + z)); // we can write e[err] or err[e] or *(err+i) or *(i+err)  to print something
        z++;
    }
    return 0;
}
