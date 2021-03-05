/*
** EPITECH PROJECT, 2020
** my_sokoban
** File description:
** macro for the lib
*/

#ifndef MY_SOKOBAN_H_
#define MY_SOKOBAN_H_

#include "lib.h"
#include "game.h"
#include "movement.h"
#include "macros.h"
#include <ncurses.h>


/////////// init struct ///////////
game_t *init_game_struct(void);
move_t *init_move_struct(void);
///////////////////////////////////

/////////// check errors ///////////
int check_errors(game_t *game);
///////////////////////////////////

/////////// start game ////////////
int start_game(char *path, game_t *game);
///////////////////////////////////

///////////   events   ////////////
void get_event(game_t *game);
///////////////////////////////////

///////////    print    ////////////
void print_game(game_t *game);
int print_usage(void);
void print_bad_char(char **map, int x, int y);
///////////////////////////////////

/////////// refresh game ////////////
int refresh_game(game_t *game, move_t *movement);
/////////////////////////////////////

///////////   find p   ////////////
int find_p(game_t *game);
///////////////////////////////////

///////////    count    ////////////
void count_boxes_and_o(game_t *game);
unsigned int count_players(char **map);
///////////////////////////////////

///////////   is move   ////////////
int is_move_up(game_t *game);
int is_move_down(game_t *game);
int is_move_left(game_t *game);
int is_move_right(game_t *game);
///////////////////////////////////

///////////  movement  ////////////
void move_up(game_t *game);
void move_down(game_t *game);
void move_left(game_t *game);
void move_right(game_t *game);
int find_p(game_t *game);
///////////////////////////////////

///////////    free    ////////////
void free_game_t(game_t *game);
void free_move_t(move_t *move);
void free_program_mem(game_t *game, move_t *move);
///////////////////////////////////

///////////   do game  ////////////
int do_sokoban(char *path);
///////////////////////////////////

///////////   is win  ////////////
int is_wineable(game_t *game);
///////////////////////////////////

#endif /* !MY_SOKOBAN_H_ */