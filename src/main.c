/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** main
*/

#include "my_sokoban.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (my_strcmp(av[1], "-h") == 0)
        return (print_usage());
    return (do_sokoban(av[1]));
}
