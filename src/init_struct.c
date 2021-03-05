/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** file that contains function to initialize structure
*/

#include "my_sokoban.h"

move_t *init_move_struct(void)
{
    move_t *move = malloc(sizeof(move_t) * 5);

    if (!move)
        return (NULL);
    move[0].fn = &move_up;
    move[0].key = KEY_UP;
    move[1].fn = &move_down;
    move[1].key = KEY_DOWN;
    move[2].fn = &move_left;
    move[2].key = KEY_LEFT;
    move[3].fn = &move_right;
    move[3].key = KEY_RIGHT;
    move[4].fn = NULL;

    return (move);
}

game_t *init_game_struct(void)
{
    game_t *game = malloc(sizeof(game_t));

    if (!game)
        return (NULL);
    return (game);
}