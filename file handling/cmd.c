#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{

    // for (int i = 0; i < argc; i++)
    // {
    // printf("This argument at index number %d has a value %s \n ",i,argv[i]);
    // }
    int x = atoi(argv[1]);
    int factorial = 1;
    for (int i = 1; i <= x; i++)
    {
        factorial = factorial * i;
    }
    printf("%d", factorial);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if (argc < 2) {
        printf("Please provide a number as an argument.\n");
        return 1; // Exit with error code
    }

    int x = atoi(argv[1]);
    int factorial = 1;

    for (int i = 1; i <= x; i++) {
        factorial *= i;
    }

    printf("%d\n", factorial);
    return 0;
}

// harry code

int main(int argc, char const *argv[])
{
    int num1, num2;
    char *operation;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);
    if (strcmp(operation, "add") == 0)
    {
        printf("%d\n", num1 + num2);
    }
    else if (strcmp(operation, "subtract") == 0)
    {
        printf("%d\n", num1 - num2);
    }

    else if (strcmp(operation, "multiply") == 0)
    {
        printf("%d\n", num1 * num2);
    }

    else if (strcmp(operation, "divide") == 0)
    {
        printf("%d\n", num1 / num2);
    }

    return 0;
}
