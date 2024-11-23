#include "rush02.h"

static t_dict *create_dict_entry(int number, char *text)
{
    t_dict *entry = malloc(sizeof(t_dict));
    if (!entry)
        return (NULL);
    entry->number = number;
    entry->text = strdup(text);
    entry->next = NULL;
    return (entry);
}

static void add_dict_entry(t_dict **dict, int number, char *text)
{
    t_dict *new_entry = create_dict_entry(number, text);
    if (!new_entry)
        return;
    new_entry->next = *dict;
    *dict = new_entry;
}

static int parse_line(char *line, t_dict **dict)
{
    char *colon = strchr(line, ':');
    if (!colon)
        return (0);
    *colon = '\0';
    int number = atoi(line);
    char *text = colon + 1;
    while (*text == ' ')
        text++;
    add_dict_entry(dict, number, text);
    return (1);
}

t_dict *parse_dict(const char *filename)
{
    int fd = open(filename, O_RDONLY);
    if (fd < 0)
        return (NULL);

    char buffer[4096];
    ssize_t bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    close(fd);
    if (bytes_read <= 0)
        return (NULL);

    buffer[bytes_read] = '\0';
    t_dict *dict = NULL;
    char *line = strtok(buffer, "\n");
    while (line)
    {
        if (!parse_line(line, &dict))
        {
            free_dict(dict);
            return (NULL);
        }
        line = strtok(NULL, "\n");
    }
    return (dict);
}

void free_dict(t_dict *dict)
{
    while (dict)
    {
        t_dict *tmp = dict;
        dict = dict->next;
        free(tmp->text);
        free(tmp);
    }
}

