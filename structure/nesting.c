#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct Pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    typedef struct legendry
    {
        pokemon normal;
        int abliliy;

    } legend;
    typedef struct god
    {
        legend super;
        int superabliliy;

    } god;
    god a;
    a.super.normal.attack = 50;
    a.super.abliliy = 440;
    a.superabliliy = 900;

    printf("%d\n", a.super.normal.attack);
    printf("%d\n", a.super.abliliy);
    printf("%d\n", a.superabliliy);

    return 0;
}