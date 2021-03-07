/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** function that check if the box in the map are wineable
*/

#include "my_sokoban.h"

int is_move(game_t *game, int y, int x)
{
    if ((game->map.map[y + 1][x] == '#') && (game->map.map[y][x + 1] == '#'))
        return (0);
    if ((game->map.map[y - 1][x] == '#') && (game->map.map[y][x - 1] == '#'))
        return (0);
    if ((game->map.map[y + 1][x] == '#') && (game->map.map[y][x - 1] == '#'))
        return (0);
    if ((game->map.map[y - 1][x] == '#') && (game->map.map[y][x + 1] == '#'))
        return (0);
    return (1);
}

int is_bad_box(game_t *game, int x, int y)
{
    if (game->map.map[y][x] == 'X')
        if (is_move(game, y, x) == 0)
            return (1);
    return (0);
}

int get_bad_boxes_inx(game_t *game, int y)
{
    int x = 0;
    int bad_box = 0;

    while (game->map.map[y][x] != '\0') {
        bad_box += is_bad_box(game, x, y);
        x++;
    }
    return (bad_box);
}

int get_bad_boxes(game_t *game)
{
    int y = 0;
    int bad_box = 0;

    while (game->map.map[y]) {
        bad_box += get_bad_boxes_inx(game, y);
        y++;
    }
    return (bad_box);
}

int is_wineable(game_t *game)
{
    int bad_box = get_bad_boxes(game);

    if (bad_box == game->map.boxes)
        return (0);
    return (1);
}