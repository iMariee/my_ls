/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-2-myls-marie.incandela
** File description:
** users_rights.c
*/

#include <sys/stat.h>
#include "my.h"

int steps_l(struct stat *infos)
{
    number_of_links(infos);
    owner_name(infos);
    owner_group(infos);
    size_of_file(infos);
    modification_time(infos);
    return 0;
}

int users_rights(char *filename)
{
    struct stat infos;
    stat(filename, &infos);
    my_putchar((infos.st_mode & S_IRUSR) ? 'r' : '-');
    my_putchar((infos.st_mode & S_IWUSR) ? 'w' : '-');
    my_putchar((infos.st_mode & S_IXUSR) ? 'x' : '-');
    my_putchar((infos.st_mode & S_IRGRP) ? 'r' : '-');
    my_putchar((infos.st_mode & S_IWGRP) ? 'w' : '-');
    my_putchar((infos.st_mode & S_IXGRP) ? 'x' : '-');
    my_putchar((infos.st_mode & S_IROTH) ? 'r' : '-');
    my_putchar((infos.st_mode & S_IWOTH) ? 'w' : '-');
    my_putchar((infos.st_mode & S_IXOTH) ? 'x' : '-');
    return 0;
}
