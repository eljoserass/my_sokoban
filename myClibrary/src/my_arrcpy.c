/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** do a copy of an array
*/

#include "lib.h"

char **my_arrcpy(char **dest, char **src)
{
    int i = 0;

    while (src[i]) {
        dest[i] = my_strcpy(dest[i], src[i]);
        i++;
    }
    dest[i] = NULL;
    return (dest);
}