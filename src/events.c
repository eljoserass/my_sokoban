/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** manage events function
*/

#include "my_sokoban.h"

void get_event(game_t *game)
{
    game->input = getch();
}