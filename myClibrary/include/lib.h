/*
** EPITECH PROJECT, 2020
** my_sokoban
** File description:
** macro for the lib
*/

#ifndef LIB_H_
#define LIB_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int my_strlen(char const *str);
int my_strcmp(char const *n1, char const *n2);
void my_put_nbr(int nb);
void my_putchar(char c);
void my_putstr(char const *str);
void my_print_array(char **array);
void free_double_array(char **arr);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
char **my_arrcpy(char **dest, char **src);
char *my_concat_strings(char *sone, char *stwo);
unsigned int my_arrsize(char **arr);
char **my_arrdup(char **arr, char *str);
char **my_str_to_word_array(char const *str, char lim);

//////// file_management ////////
char *get_file(char *file);
int read_file(int fd, char *buf, int size);
int get_size(char *file);
////////////////////////////////

#endif /* !LIB_H_ */
