/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** structure of all the info of the game
*/

#ifndef GAME_H_
#define GAME_H_


#include "render_info.h"

typedef struct game_s {
    player_t player;
    map_t map;
    int input;
} game_t;

#endif /* !GAME_H_ */

