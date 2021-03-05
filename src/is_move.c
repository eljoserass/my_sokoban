/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** function that check if the movements can be made
*/

#include "my_sokoban.h"

int is_move_up(game_t *game)
{
    unsigned int x = game->player.pos.x;
    int y = game->player.pos.y;

    if (game->map.map[y - 1][x] == 'X') {
        if ((game->map.map[y - 2][x] == '#') ||
        (game->map.map[y - 2][x] == 'X') || (y == 0))
            return (0);
    }
    if (game->map.map[y - 1][x] == '#' || (y == 0))
        return (0);
    if (x > my_strlen(game->map.map[y - 1]))
        return (0);
    return (1);
}

int is_move_down(game_t *game)
{
    unsigned int x = game->player.pos.x;
    int y = game->player.pos.y;

    if (game->map.map[y + 1][x] == 'X') {
        if ((game->map.map[y + 2][x] == '#') ||
        (game->map.map[y + 2][x] == 'X') || ((y + 2) >= game->map.y))
            return (0);
    }
    if (game->map.map[y + 1][x] == '#' || ((y + 1) >= game->map.y))
        return (0);
    if (x > my_strlen(game->map.map[y + 1]))
        return (0);
    return (1);
}

int is_move_left(game_t *game)
{
    int x = game->player.pos.x;
    int y = game->player.pos.y;

    if (game->map.map[y][x - 1] == 'X') {
        if ((game->map.map[y][x - 2] == '#') ||
        (game->map.map[y][x - 2] == 'X' || ((x - 2) < 0)))
            return (0);
    }
    if (game->map.map[y][x - 1] == '#' || ((x - 1) < 0))
        return (0);
    return (1);
}

int is_move_right(game_t *game)
{
    int x = game->player.pos.x;
    int y = game->player.pos.y;

    if (game->map.map[y][x + 1] == 'X') {
        if ((game->map.map[y][x + 2] == '#') ||
        (game->map.map[y][x + 2] == 'X') || (game->map.map[y][x + 2] == '\0'))
            return (0);
    }
    if (game->map.map[y][x + 1] == '#' || (game->map.map[y][x + 1] == '\0'))
        return (0);
    return (1);
}