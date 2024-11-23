#include "rush02.h"

int main(int argc, char **argv)
{
    if (argc < 2 || argc > 3)
    {
        write(1, "Error\n", 6);
        return (1);
    }

    t_dict *dict = NULL;
    if (argc == 3)
        dict = parse_dict(argv[1]);
    else
        dict = parse_dict("numbers.dict");

    if (!dict)
    {
        write(1, "Dict Error\n", 11);
        return (1);
    }

    if (!is_valid_number(argv[argc - 1]))
    {
        write(1, "Error\n", 6);
        free_dict(dict);
        return (1);
    }

    char *result = number_to_words(argv[argc - 1], dict);
    if (!result)
        write(1, "Dict Error\n", 11);
    else
    {
        write(1, result, strlen(result));
        write(1, "\n", 1);
        free(result);
    }

    free_dict(dict);
    return (0);
}

