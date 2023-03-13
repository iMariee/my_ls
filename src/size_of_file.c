/*
** EPITECH PROJECT, 2022
** LS
** File description:
** Untitled-1
*/

#include "../include/my.h"

int size_of_file(struct stat *infos)
{
    int inf = infos->st_size;

    my_putchar(' ');
    my_put_nbr(inf);
    my_putchar(' ');
    return 0;
}
