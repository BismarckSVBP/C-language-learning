#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct Cricketer
    {
        char fname[20];
        char lname[20];
        int age;
        int noOfmatches;
        float averageRuns;
    } cricketer;
    cricketer arr[20];
    for (int i = 0; i < 2; i++)
    {
        
        printf("Enter name of cricketer : ");
        scanf("%s", arr[i].fname);
        printf("Enter name of cricketer : ");
        scanf("%s", arr[i].lname);
        printf("Enter age of cricketer : ");
        scanf("%d", &arr[i].age);
        printf("Enter no. of matches played of cricketer : ");
        scanf("%d", &arr[i].noOfmatches);
        printf("Enter average runs of cricketer : ");
        scanf("%f", &arr[i].averageRuns);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("Name of cricketer : %s %s\n", arr[i].fname, arr[i].lname);

        printf("Age of cricketer is : %d\n", arr[i].age);

        printf("No. of matches played of cricketer : %d\n", arr[i].noOfmatches);

        printf("Average runs of cricketer : %f\n", arr[i].averageRuns);
    }
    return 0;
}