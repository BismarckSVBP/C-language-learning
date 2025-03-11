#include <stdio.h>

int main()
{
    typedef struct date
    {
        int date;
        int month;
        int year;
    } date;
    date a, b;
    a.date = 10;
    a.month = 10;
    a.year = 2004;
    b.date = 10;
    b.month = 10;
    b.year = 2004;
    if (a.date == b.date && a.month == b.month && a.year == b.year)
    {
        printf("equal");
    }
    else
    {
        printf("Unequal");
    }
    return 0;
}