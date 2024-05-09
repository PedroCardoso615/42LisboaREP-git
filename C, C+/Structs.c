#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    double KD;
    double kills;
    double deaths;
};


// Struct = collection of related members ("Variables").
// They can be of different data types, listed in one name in a block of memory.

int main()
{
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "NikksonHD615");
    player1.kills = 957;
    player1.deaths = 893;
    player1.KD = player1.kills/player1.deaths;

    strcpy(player2.name, "Tmrodes2001");
    player2.kills = 1436;
    player2.deaths = 1579;
    player2.KD = player2.kills/player2.deaths;

    printf("NameTag: %s\n", player1.name);
    printf("K/D: %.2lf\n", player1.KD);

    printf("NameTag: %s\n", player2.name);
    printf("K/D: %.2lf\n", player2.KD);
    return 0;
}