/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** do frees
*/

#include "my_sokoban.h"

void free_game_t(game_t *game)
{
    free_double_array(game->map.map);
    free_double_array(game->map.map_copy);
    free(game);
}

void free_move_t(move_t *move)
{
    free(move);
}

void free_program_mem(game_t *game, move_t *move)
{
    free_game_t(game);
    free_move_t(move);
}