/*
** EPITECH PROJECT, 2022
** LS
** File description:
** type_of_file.c
*/

#include <stdio.h>
#include <dirent.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "my.h"

int type_of_file(struct stat *type)
{
    for (int i = 0; i != 1; i++) {
    switch (type->st_mode & S_IFMT) {
        case S_IFDIR:
            my_putchar('d');
            break;
        default:
            my_putchar('-');
            break;
        }
    }
    return 0;
}
