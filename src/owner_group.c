/*
** EPITECH PROJECT, 2022
** LS
** File description:
** Untitled-1
*/

#include "../include/my.h"
#include <grp.h>

int owner_group(struct stat *infos)
{
    gid_t inf = infos->st_gid;
    struct group *grp;

    my_putchar(' ');
    grp = getgrgid(inf);
    my_putstr(grp->gr_name);
    my_putchar(' ');
    return 0;
}
