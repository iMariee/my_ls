/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-2-myls-marie.incandela
** File description:
** is_file.c
*/

#include <sys/stat.h>
#include "my.h"
#include <sys/types.h>
#include <stdio.h>

int open_file(char *file)
{
    struct stat type;
    stat(file, &type);
    my_putchar('-');
    users_rights(file);
    steps_l(&type);
    my_putstr(file);
    my_putchar('\n');
    return 0;
}

int is_file(char *filename)
{
    DIR *file;
    struct dirent *files = NULL;
    file = opendir(filename);
    struct stat type;
    stat(filename, &type);
    for (int i = 0; i != 1; i++) {
    switch (type.st_mode & S_IFMT) {
        case S_IFDIR:
            rights(filename);
            break;
        default:
            open_file(filename);
            break;
        }
    }
    return 0;
}
