/*
** EPITECH PROJECT, 2022
** LS
** File description:
** no_flag.c
*/

#include "../include/my.h"
#include "../include/mi_flag_st.h"

int no_flag(char *filename)
{
    DIR *files;
    struct dirent *file;
    files = opendir(filename);
    char *b;
    if (files == NULL) {
        my_putstr("ls:");
        my_putstr(filename);
        my_putstr(": No such file or directory\n");
        return 84;
    }
    while ((file = readdir(files)) != NULL) {
        b = file->d_name;
        if (b[0] != '.') {
            my_putstr(b);
            my_putchar('\t');
        }
    }
    closedir(files);
    return 0;
}

int simple_ls(char *filename)
{
    DIR *files; files = opendir(filename);
    struct stat type;
    stat(filename, &type);
    for (int i = 0; i != 1; i++) {
    switch (type.st_mode & S_IFMT) {
        case S_IFDIR:
            stat(filename, &type);
            if (files == NULL) {
                my_putstr("ls: "); my_putstr(filename);
                my_putstr(": No such file or directory\n");
                exit(84);
            }
            no_flag(filename);
            break;
        default:
            my_putstr(filename);
            break;
        }
    }
    return 0;
}
