/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** function that count some info for erro handling
*/

#include "my_sokoban.h"

void count_boxes_and_o_inx(game_t *game, int y)
{
    int x = 0;

    while (game->map.map_copy[y][x] != '\0') {
        if (game->map.map_copy[y][x] == 'X')
            game->map.boxes++;
        if (game->map.map_copy[y][x] == 'O')
            game->map.o++;
        x++;
    }
}

void count_boxes_and_o(game_t *game)
{
    int y = 0;

    while (game->map.map_copy[y]) {
        count_boxes_and_o_inx(game, y);
        y++;
    }

}

int count_p_inx(char *str)
{
    int x = 0;
    int p = 0;

    while (str[x] != '\0') {
        if (str[x] == 'P')
            p++;
        x++;
    }
    return (p);
}

unsigned int count_players(char **map)
{
    int y = 0;
    int p = 0;

    while (map[y]) {
        p += count_p_inx(map[y]);
        y++;
    }
    return (p);
}