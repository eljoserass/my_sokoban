/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** create the new state of the game function
*/

#include "my_sokoban.h"

int is_restart(game_t *game)
{
    if (game->input == SPACE)
        game->map.map =  my_arrcpy(game->map.map, game->map.map_copy);
    return (0);
}

int is_win(game_t *game)
{
    int y = 0;
    int x = 0;
    int point = 0;

    while (game->map.map_copy[y]) {
        while (game->map.map_copy[y][x]) {
            if (game->map.map_copy[y][x] == 'O' &&
            game->map.map[y][x] == 'X')
                point++;
            x++;
        }
        x = 0;
        y++;
    }
    if (point == game->map.boxes)
        return (0);
    if (is_wineable(game) == 0)
        return (1);
    return (-1);
}

int refresh_game(game_t *game, move_t *movement)
{
    int i = 0;

    while (movement[i].fn != NULL) {
        if (game->input == movement[i].key)
            movement[i].fn(game);
        i++;
    }
    if (is_restart(game) == 84)
        return (84);
    refresh();
    return (is_win(game));
}