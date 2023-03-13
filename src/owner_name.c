/*
** EPITECH PROJECT, 2022
** LS
** File description:
** Untitled-1
*/

#include "../include/my.h"
#include <pwd.h>

int owner_name(struct stat *infos)
{
    uid_t inf = infos->st_uid;
    struct passwd *pwd;

    my_putchar(' ');
    pwd = getpwuid(inf);
    my_putstr(pwd->pw_name);
    my_putchar(' ');
    return 0;
}
