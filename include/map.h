/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** struct with map info
*/

#ifndef MAP_H_
#define MAP_H_

typedef struct map_s {
    char **map;
    char **map_copy;
    int boxes;
    int o;
    int x;
    int y;
} map_t;

#endif /* !MAP_H_ */
