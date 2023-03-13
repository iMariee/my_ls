/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/


#ifndef MY_H_
    #define MY_H_
    #include <stdio.h>
    #include <dirent.h>
    #include <stdbool.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <sys/types.h>
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int error_handler(int argc);
int flag_a(char *filename);
int no_flag(char *filename);
int my_put_nbr(int nb);
int my_strlen(char const *str);
int detect_flags(char **argv);
int number_of_links(struct stat *infos);
int owner_name(struct stat *infos);
int owner_group(struct stat *infos);
int size_of_file(struct stat *infos);
int modification_time(struct stat *infos);
int rights(char *filename);
int type_of_file(struct stat *infos);
void blocks_alloc(struct stat *infos);
void owner_rights(struct stat *infos);
void group_rights(struct stat *infos);
void other_rights(struct stat *infos);
int steps_l(struct stat *infos);
int users_rights(char *filename);
int open_file(char *file);
int is_file(char *filename);
int simple_ls(char *file);
int detect_f_end(char **argv);
char *filenamee(char *str, char *b);
char *my_strcat(char *dest, char *src);

#endif
