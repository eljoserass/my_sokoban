/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** funcitons that print the things in the game
*/

#include "my_sokoban.h"

int print_usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tmap  file representing the warehouse map, containing ‘#’");
    my_putstr(" for walls,\n\t     ‘P’ for the player, ‘X’");
    my_putstr("for boxes and ‘O’");
    my_putstr(" for storage locations.\n");
    return (0);
}

void print_bad_char(char **map, int x, int y)
{
    my_putstr("Error: check_chars: ");
    my_putstr("Invalid characther '");
    my_putchar(map[y][x]);
    my_putstr("' in (");
    my_put_nbr(x);
    my_putstr(", ");
    my_put_nbr(y);
    my_putstr(")\n");
}

void print_in_center(game_t *game, int y)
{
    int len = my_strlen(game->map.map[2]);
    int lines = (LINES / 2) + y;
    int cols = COLS /2;

    if (len < COLS && game->map.y < LINES)
        mvprintw(lines, cols, "%s\n", game->map.map[y]);
    else
        mvprintw(LINES / 2, COLS / 2, "I NEED SPACE\n");
}

void print_game(game_t *game)
{
    int y = 0;

    clear();
    while (game->map.map[y]) {
        print_in_center(game, y);
        y++;
    }
    noecho();
}