/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** Task02 of Day04
*/

#include <unistd.h>
#include "../include/my.h"

int my_putstr(const char *str)
{
    int i = 0;
    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
