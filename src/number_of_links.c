/*
** EPITECH PROJECT, 2022
** LS
** File description:
** Untitled-1
*/

#include "../include/my.h"

int number_of_links(struct stat *infos)
{
    int inf = infos->st_nlink;

    my_putchar(' ');
    my_put_nbr(inf);
    my_putchar(' ');
    return 0;
}
