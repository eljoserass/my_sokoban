/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** arr size
*/

#include <stdlib.h>

unsigned int my_arrsize(char **arr)
{
    int i = 0;

    while (arr[i])
        i++;
    return (i);
}