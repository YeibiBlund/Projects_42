#include "rush02.h"

static char *find_in_dict(int number, t_dict *dict)
{
    while (dict)
    {
        if (dict->number == number)
            return (dict->text);
        dict = dict->next;
    }
    return (NULL);
}

char *number_to_words(const char *number, t_dict *dict)
{
    char *result = malloc(1024);
    if (!result)
        return (NULL);
    result[0] = '\0';

    int len = strlen(number);

    if (len == 1) {
        // Si es un número de una sola cifra
        char *word = find_in_dict(number[0] - '0', dict);
        if (word) {
            strcat(result, word);
        }
    } 
    else if (len == 2) {
        int n = (number[0] - '0') * 10 + (number[1] - '0');
        
        // Manejo de los números entre 11 y 19 (inclusive)
        if (n >= 11 && n <= 19) {
            // Los números entre 11 y 19 deben ser tratados como una palabra completa
            char *word = find_in_dict(n, dict);
            if (word) {
                strcat(result, word);
            }
        } 
        else {
            // Para los números mayores o iguales a 20
            int tens = (number[0] - '0') * 10;  // Decenas
            char *tens_word = find_in_dict(tens, dict);
            if (tens_word) {
                strcat(result, tens_word);
            }

            // Unidades
            int ones = number[1] - '0';
            if (ones > 0) {
                char *ones_word = find_in_dict(ones, dict);
                if (ones_word) {
                    strcat(result, " ");  // Solo añadir espacio antes de la unidad
                    strcat(result, ones_word);
                }
            }
        }
    }

    return (result);
}
