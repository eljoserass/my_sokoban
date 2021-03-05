/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** function that find position fo p and save it in the game struct
*/

#include "my_sokoban.h"

int is_p(game_t *game, int y)
{
    int x = 0;

    while (game->map.map[y][x] != '\0') {
        if (game->map.map[y][x] == 'P') {
            game->player.pos.x = x;
            game->player.pos.y = y;
            return (1);
        }
        x++;
    }
    return (0);
}

int find_p(game_t *game)
{
    int y = 0;

    while (game->map.map[y]) {
        if (is_p(game, y) == 1)
            return (0);
        y++;
    }
    return (0);
}
