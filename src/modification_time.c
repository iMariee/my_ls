/*
** EPITECH PROJECT, 2022
** LS
** File description:
** Untitled-1
*/

#include "../include/my.h"
#include <time.h>

int modification_time(struct stat *infos)
{
    time_t *inf = &infos->st_mtime;
    char *time = ctime(inf);

    my_putchar(' ');
    for (int i = 4; i != 16; i++) {
        my_putchar(time[i]);
    }
    my_putchar(' ');
    return 0;
}
