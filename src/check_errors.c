/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** check errors in the file map
*/

#include "my_sokoban.h"

int check_nb_players(char **map)
{
    int p = count_players(map);

    if (p > 1) {
        my_putstr("too many players\n");
        return (ERROR);
    }
    if (p == 0) {
        my_putstr("player missing\n");
        return (ERROR);
    }
    return (SUCCESS);
}

int check_nb_boxes(game_t *game)
{
    count_boxes_and_o(game);

    if (game->map.boxes != game->map.o) {
        my_putstr("there has to be the same X and O\n");
        return (ERROR);
    }
    return (SUCCESS);
}

int check_char_inx(char **map, int y)
{
    int x = 0;

    while (map[y][x] != '\0') {
        if ((map[y][x] != 'O') && (map[y][x] != 'P') && (map[y][x] != 'X')
        && (map[y][x] != '#') && (map[y][x] != ' ')) {
                print_bad_char(map, x, y);
                return (ERROR);
        }
        x++;
    }
    return (SUCCESS);
}

int check_chars(char **map)
{
    int y = 0;

    while (map[y]) {
        if (check_char_inx(map, y) == ERROR)
            return (ERROR);
        y++;
    }
    return (SUCCESS);
}

int check_errors(game_t *game)
{
    if (check_chars(game->map.map) == ERROR)
        return (ERROR);
    if (check_nb_boxes(game) == ERROR)
        return (ERROR);
    if (check_nb_players(game->map.map) == ERROR)
        return (ERROR);
    return (SUCCESS);
}