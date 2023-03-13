/*
** EPITECH PROJECT, 2022
** LS
** File description:
** Untitled-1
*/

#include <stdbool.h>
#include "../include/mi_flag_st.h"
#include "../include/my.h"

int detect_f_end(char **argv)
{
    if (argv[2][0] == '-') {
        switch (argv[2][1]) {
            case 'a':
                return flag_a_two;
                break;
            case 'l':
                return flag_l_two;
                break;
            default:
                return flag_unknown_two;
                break;
        }
    }
    return 0;
}

int detect_flags(char **argv)
{
    if (argv[1][0] == '-') {
        switch (argv[1][1]) {
            case 'a':
                return is_flag_a;
                break;
            case 'R':
                return is_flag_r;
                break;
            case 'l':
                return is_flag_l;
                break;
            default:
                return is_flag_unknown;
                break;
            }
        }
    return 0;
}
