/*
** EPITECH PROJECT, 2022
** LS
** File description:
** Untitled-1
*/

#include "../include/my.h"
#include "../include/mi_flag_st.h"

int flag_a(char *filename)
{
    DIR* file;
    struct dirent* files;
    file = opendir(filename);

    while ((files = readdir(file)) != NULL) {
        my_putstr(files->d_name);
        my_putchar('\n');
    }

    closedir(file);
    return 0;
}
