/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** functions that create the movement
*/

#include "my_sokoban.h"

void clear_pos(game_t *game)
{
    int x = game->player.pos.x;
    int y = game->player.pos.y;

    if (game->map.map_copy[y][x] == 'P' || game->map.map[y][x] == 'P')
        game->map.map[y][x] = ' ';
    if (game->map.map_copy[y][x] == ' ' || game->map.map_copy[y][x] == 'O')
        game->map.map[y][x] = game->map.map_copy[y][x];
}

void move_up(game_t *game)
{
    int x = 0;
    int y = 0;

    find_p(game);
    x = game->player.pos.x;
    y = game->player.pos.y;
    clear_pos(game);
    if (is_move_up(game) == 1) {
        if (game->map.map[y - 1][x] == 'X')
                game->map.map[y- 2][x] = 'X';
            game->map.map[y - 1][x] = 'P';
    } else
        game->map.map[y][x] = 'P';

}

void move_down(game_t *game)
{
    int x = 0;
    int y = 0;

    find_p(game);
    x = game->player.pos.x;
    y = game->player.pos.y;
    clear_pos(game);
    if (is_move_down(game) == 1) {
        if (game->map.map[y + 1][x] == 'X')
                game->map.map[y + 2][x] = 'X';
            game->map.map[y + 1][x] = 'P';
    } else
        game->map.map[y][x] = 'P';
}

void move_left(game_t *game)
{
    int x = 0;
    int y = 0;

    find_p(game);
    x = game->player.pos.x;
    y = game->player.pos.y;
    clear_pos(game);
    if (is_move_left(game) == 1) {
        if (game->map.map[y][x - 1] == 'X')
                game->map.map[y][x - 2] = 'X';
            game->map.map[y][x - 1] = 'P';
    } else
        game->map.map[y][x] = 'P';
}

void move_right(game_t *game)
{
    int x = 0;
    int y = 0;

    find_p(game);
    x = game->player.pos.x;
    y = game->player.pos.y;
    clear_pos(game);
    if (is_move_right(game) == 1) {
        if (game->map.map[y][x + 1] == 'X')
                game->map.map[y][x + 2] = 'X';
            game->map.map[y][x + 1] = 'P';
    } else
        game->map.map[y][x] = 'P';
}