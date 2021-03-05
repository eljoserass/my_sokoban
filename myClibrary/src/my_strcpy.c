/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** copy a string into another
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}