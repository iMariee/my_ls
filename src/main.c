/*
** EPITECH PROJECT, 2022
** LS
** File description:
** Untitled-1
*/

#include "../include/my.h"
#include "../include/mi_flag_st.h"

int error_handler(int argc)
{
    if (argc > 3) {
        my_putstr("Too much arguments\n");
        return 84;
    }
    return 0;
}

int two_args(int argc, char **argv)
{
    if ((argc == 2) && (detect_flags(argv) == is_flag_a)) {
        flag_a(".");
        return 0;
    }
    if ((argc == 2) && (detect_flags(argv) == is_flag_unknown)) {
        simple_ls(argv[1]);
        return 0;
    }
    if ((argc == 2) && (detect_flags(argv) == is_flag_l)) {
        rights(".");
        return 0;
    }
    return 0;
}

int three_args_two(int argc, char **argv)
{
    if ((argc == 3) && (detect_f_end(argv) == flag_a_two)) {
        flag_a(argv[1]);
        return 177;
    }
    if ((argc == 3) && (detect_f_end(argv) == flag_l_two)) {
        is_file(argv[1]);
        return 177;
    }
    return 0;
}

int three_args(int argc, char **argv)
{
    if (three_args_two(argc, argv) == 177) {
        return 0;
    }
    if ((argc == 3) && (detect_flags(argv) == is_flag_a)) {
        flag_a(argv[2]);
        return 0;
    }
    if ((argc == 3) && (detect_flags(argv) == is_flag_l)) {
        is_file(argv[2]);
        return 0;
    }
    if ((argc == 3) && (detect_flags(argv) == is_flag_unknown)) {
        my_putstr(argv[1]); my_putstr(" :\n"); no_flag(argv[1]);
        my_putchar('\n'); my_putstr(argv[3]); my_putstr(" :\n");
        return 0;
    }
    return 0;
}

int main(int argc, char **argv)
{
    if (error_handler(argc) == 84) {
        return 84;
    }
    if (argc == 1) {
        no_flag(".");
        return 0;
    }
    two_args(argc, argv);

    three_args(argc, argv);
}
