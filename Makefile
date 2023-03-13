##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	./src/my_all_put_nbr.c	\
		./src/main.c	\
		./src/my_putchar.c	\
		./src/my_putstr.c	\
		./src/flag_a.c	\
		./src/no_flag.c	\
		./src/my_strlen.c	\
		./src/detect_flags.c	\
		./src/file_rights.c	\
		./src/number_of_links.c	\
		./src/owner_name.c	\
		./src/owner_group.c	\
		./src/size_of_file.c	\
		./src/modification_time.c	\
		./src/type_of_file.c	\
		./src/blocks_alloc.c	\
		./src/users_rights.c	\
		./src/is_file.c	\
		./src/my_strcat.c

CC	=	@gcc

OBJ	=	$(SRC:.c=.o)

REM	=	*.gcno	\
		*.gcda

CFLAGS	=	-Wall -Wextra -g3

CPPFLAGS	=	-I./include

NAME	=	my_ls

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(CPPFLAGS) -g

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all clean

.PHONY: fclean all clean re
