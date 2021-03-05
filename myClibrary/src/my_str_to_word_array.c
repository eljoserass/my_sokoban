/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** convert the string as parameter by the given lim
*/

#include "lib.h"

int is_lim(char current, char lim)
{
    if (current == lim || current == '\0')
        return (1);
    return (0);
}

int count_words(char const *str, char lim)
{
    int i = 0;
    int words = 0;

    while (str[i]) {
        if (is_lim(str[i], lim) == 0 && is_lim(str[i + 1], lim) == 1)
            words++;
        i++;
    }
    return (words);
}

int get_word_len(char const *str, char lim, int i)
{
    int len = 0;

    while (is_lim(str[i], lim) == 0) {
        i++;
        len++;
    }
    return (len);
}

char **allocate_array(char const *str, char lim)
{
    int w = 0;
    int from = 0;
    int word_len = 0;
    int words = count_words(str, lim);
    char **result = malloc(sizeof(char *) * (words + 1));

    if (!result)
        return (NULL);
    while (w != words) {
        word_len = get_word_len(str, lim, from);
        from += word_len + 1;
        result[w] = malloc(word_len + 2);
        if (!result)
            return (NULL);
        w++;
    }
    result[words] = NULL;
    return (result);
}

char **my_str_to_word_array(char const *str, char lim)
{
    int from = 0;
    int words = 0;
    int w = 0;
    int i = 0;
    char **result = allocate_array(str, lim);

    if (!result)
        return (NULL);
    words = count_words(str, lim);
    while (w != words) {
        while (is_lim(str[from], lim) == 1)
            from++;
        while (is_lim(str[from], lim) == 0)
            result[w][i++] = str[from++];
        result[w][i] = '\0';
        i = 0;
        w++;
    }
    return (result);
}