/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-2-myls-marie.incandela
** File description:
** users_rights.c
*/

#include <sys/stat.h>
#include "my.h"

void owner_rights(struct stat *infos)
{
    if ((infos->st_mode & S_IRWXU) == S_IRUSR){
        my_putchar('r');
    } else {
        my_putchar('-');
    }
    if ((infos->st_mode & S_IRWXU) == S_IWUSR) {
        my_putchar('w');
    } else {
        my_putchar('-');
    }
    if ((infos->st_mode & S_IRWXU) == S_IXUSR) {
        my_putchar('x');
    } else {
        my_putchar('-');
    }
    my_putchar('-');
}

void group_rights(struct stat *infos)
{
    if ((infos->st_mode & S_IRWXG) == S_IRGRP){
        my_putchar('r');
    } else {
        my_putchar('-');
    }
    if ((infos->st_mode & S_IRWXG) == S_IWGRP) {
        my_putchar('w');
    } else {
        my_putchar('-');
    }
    if ((infos->st_mode & S_IRWXG) == S_IXGRP) {
        my_putchar('x');
    } else {
        my_putchar('-');
    }
    my_putchar('-');
}

void other_rights(struct stat *infos)
{
    if ((infos->st_mode & S_IRWXO) == S_IROTH){
        my_putchar('r');
    } else {
        my_putchar('-');
    }
    if ((infos->st_mode & S_IRWXO) == S_IWOTH) {
        my_putchar('w');
    } else {
        my_putchar('-');
    }
    if ((infos->st_mode & S_IRWXO) == S_IXOTH) {
        my_putchar('x');
    } else {
        my_putchar('-');
    }
    my_putchar('-');
}
