#ifndef RUSH02_H
#define RUSH02_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

typedef struct s_dict
{
    int number;
    char *text;
    struct s_dict *next;
} t_dict;

// dict_parse.c
t_dict *parse_dict(const char *filename);
void free_dict(t_dict *dict);

// dict_utils.c
int is_valid_number(const char *str);

// number_to_words.c
char *number_to_words(const char *number, t_dict *dict);

#endif

