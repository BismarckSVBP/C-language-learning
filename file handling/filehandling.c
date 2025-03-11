#include <stdio.h>

int main()
{

    FILE *ptr;

    // creation of a file or open a file
    ptr = fopen("college.txt", "w");

    char str[] = "My name is Abhay Kumar.\nMy rollno. is 2023021002";

    // writing in a file
    fputs(str, ptr);
    fclose(ptr);




    FILE *ptr2;
    // creation of a file or open a file
    ptr2 = fopen("college.txt", "r");
    char str2[100];
    // reading a file
    // if we use while it prints all the line of the documents
    while (fgets(str2, 100, ptr2) != NULL)
    {
        printf("%s", str2);
    };
    printf("\n");

    fclose(ptr2);



    printf("\n");




    FILE *ptr3;
    // creation of a file or open a file
    ptr3 = fopen("college.txt", "r");

    char str3[100];

    // reading a file
    // if we use while it prints single line of the documents

    if (fgets(str3, 100, ptr3) != NULL)
    {
        printf("%s", str3);
    };
    fclose(ptr3);
    return 0;
}