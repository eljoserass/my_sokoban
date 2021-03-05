/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** function to start the game
*/

#include "my_sokoban.h"

int get_lines(char *map, game_t *game)
{
    int i = 0;
    game->map.y = 0;

    while (map[i] != '\0') {
        if (map[i] == '\n')
            game->map.y++;
        i++;
    }
    if (game->map.y < 3) {
        my_putstr("You sure that map its okay?\n");
        return (84);
    }
    return (0);
}

int get_map(char *path, game_t *game)
{
    char *file = get_file(path);

    if (!file)
        return (84);
    if (get_lines(file, game) == 84)
        return (84);
    game->map.map = my_str_to_word_array(file, '\n');
    if (!game->map.map)
        return (84);
    game->map.map_copy = my_str_to_word_array(file, '\n');
    if (!game->map.map_copy)
        return (84);
    if (check_errors(game) == 84)
        return (84);
    free(file);
    return (0);
}

int start_game(char *path, game_t *game)
{
    if (get_map(path, game) == 84)
        return (84);
    initscr();
    keypad(stdscr, true);
    return (0);
}