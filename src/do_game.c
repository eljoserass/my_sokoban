/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** function that call al the functions for the game
*/

#include "my_sokoban.h"

int end_game(int value, game_t *game)
{
    print_game(game);
    refresh();
    endwin();
    return (value);
}

int do_game_loop(game_t *game, move_t *move)
{
    int status = -1;

    while (status == -1){
        print_game(game);
        get_event(game);
        status = refresh_game(game, move);
        if (game->input == ESC) {
            status = 0;
            return (end_game(status, game));
        }
    }
    return (end_game(status, game));
}

int do_sokoban(char *path)
{
    game_t *game = init_game_struct();
    move_t *move = NULL;
    int status = 0;

    if (!game)
        return (ERROR);
    move = init_move_struct();
    if (!move)
        return (ERROR);
    if (start_game(path, game) == ERROR)
        return (ERROR);
    status = do_game_loop(game, move);
    free_program_mem(game, move);
    return (status);
}