/*
** EPITECH PROJECT, 2022
** my_strcat
** File description:
** task02
*/

#include <unistd.h>
#include <string.h>
#include "my.h"

char *my_strcat(char *dest, char *src)
{
    int lend = my_strlen(dest);
    int lens = my_strlen(src);
    int tot_len = lend + lens;
    char *new_str = malloc(sizeof(char) * (lend + lens) + 1);
    int j = 0;
    int i = 0;
    while (i != tot_len) {
        new_str[i] = dest[i];
        i++;
        if (dest[i] == '\0') {
            while (src[j] != '\0') {
                new_str[i] = src[j];
                j++;
                i++;
            }
        }
    }
    new_str[i] = '\0';
    return new_str;
}
