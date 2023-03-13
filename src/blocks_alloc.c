/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-2-myls-marie.incandela
** File description:
** blocks_alloc.c
*/

#include <sys/stat.h>
#include "my.h"
#include <stdio.h>

void blocks_alloc(struct stat *infos)
{
    int blocks = infos->st_blksize;
    my_putstr("total ");
    my_put_nbr(blocks);
    my_putchar('\n');
}
