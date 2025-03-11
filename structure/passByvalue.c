#include <stdio.h>
#include <string.h>

// globally declear karne par hi function main access kar sakte hai
typedef struct Pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon;
void fun(pokemon p)
{
    p.attack = 100;
    printf("%d\n", p.attack);
    return;
};
int main()

{

    pokemon a;
    a.attack = 50;
    a.hp = 80;
    a.speed = 90;
    a.tier = 'b';
    strcpy(a.name, "Pikachu");
    fun(a);
    printf("%d\n", a.attack);

    return 0;
}