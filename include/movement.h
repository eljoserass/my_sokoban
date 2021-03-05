/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** strcut for the functions of movement of the player
*/

#ifndef MOVEMENT_H_
#define MOVEMENT_H_

#include "game.h"

typedef struct move_s {
    void (*fn)(game_t *game);
    int key;
} move_t;

#endif /* !MOVEMENT_H_ */
