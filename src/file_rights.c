/*
** EPITECH PROJECT, 2022
** LS
** File description:
** Untitled-1
*/

#include <stdlib.h>
#include "../include/my.h"
#include <string.h>
#include <stdio.h>

int count(char *filename)
{
    DIR* file;
    struct dirent* files = NULL;
    struct stat infos;
    file = opendir(filename);
    int total_blocks = 0;
    int blocks = 0;
    while ((files = readdir(file)) != NULL) {
        filename = filenamee(filename, files->d_name);
        stat(filename, &infos);
        blocks = infos.st_blocks;
        total_blocks = total_blocks + blocks;
    }
    return total_blocks;
}

char *filenamee(char *str, char *b)
{
    int lenstr = my_strlen(str);
    char *new_str = malloc(sizeof(char) * (lenstr + 254) + 1);
    new_str = my_strcat(str, "/");
    new_str = my_strcat(new_str, b);
    return new_str;
}

int rights(char *filename)
{
    DIR* file; struct stat infos;
    struct dirent* files = NULL;
    file = opendir(filename);
    int total_blocks = count(filename);
    my_putstr("total "); my_put_nbr(total_blocks); my_putchar('\n');
    char *filename_x = malloc(sizeof(char) * 50);
    while ((files = readdir(file)) != NULL) {
        char *b = files->d_name;
        if (b[0] != '.') {
            filename_x = filenamee(filename, files->d_name);
            stat(filename_x, &infos);
            type_of_file(&infos);
            users_rights(filename_x);
            steps_l(&infos);
            my_putstr(files->d_name);
            my_putchar('\n');
        }
    }
    return 0;
}
