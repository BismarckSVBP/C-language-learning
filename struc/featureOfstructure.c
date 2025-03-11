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
    pokemon arr[3];
    arr->attack = 50;
    arr->hp = 70;
    arr->speed = 90;
    arr->tier = 'b';
    strcpy(arr[0].name, "Pikachu");
    printf("%d\n", arr[0].attack);
    printf("%d\n", arr[0].hp);
    printf("%d\n", arr->speed);
    printf("%c\n", arr->tier);
    printf("%s\n", arr->name);

    arr[1].attack = 90;
    arr[1].hp = 30;
    arr[1].speed = 550;
    arr[1].tier = 'a';
    strcpy(arr[1].name, "Charizard");
    printf("%d\n", arr[1].attack);
    printf("%d\n", arr[1].hp);
    printf("%d\n", arr[1].speed);
    printf("%c\n", arr[1].tier);
    printf("%s\n", arr[1].name);

    arr[2].attack = 5;
    arr[2].hp = 7;
    arr[2].speed = 9;
    arr[2].tier = 'h';
    strcpy(arr[2].name, "Mewtwo");
    printf("%d\n", arr[2].attack);
    printf("%d\n", arr[2].hp);
    printf("%d\n", arr[2].speed);
    printf("%c\n", arr[2].tier);
    printf("%s\n", arr[2].name);
    return 0;
}