#include "rush02.h"

int is_valid_number(const char *str)
{
    if (!str || !*str)
        return (0);
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return (0);
        str++;
    }
    return (1);
}

