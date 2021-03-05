##
## EPITECH PROJECT, 2020
## my_sokoban
## File description:
## THE MAKEFILE
##

NAME		=	my_sokoban

CLIB_NAME	=	myClib.a

SRCS_DIR	=	src/

SRCS_FILES	=	main.c						\
				init_struct.c				\
				check_errors.c 				\
				start_game.c 				\
				do_game.c 					\
				events.c 					\
				draw.c 						\
				refresh.c 					\
				movement.c 					\
				is_move.c					\
				find_p.c 					\
				count.c 					\
				is_wineable.c 				\
				free.c 						\

SRCS		=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))

OBJS		=	$(SRCS:.c=.o)

LIB_DIR		=	lib/

CLIB_DIR	=	myClibrary

CLIB_PATH	=	$(addprefix $(LIB_DIR), $(CLIB_NAME))

RM 			=	rm -f

CC			=	gcc

CFLAGS		+=	-I./myClibrary/include
CFLAGS		+=	-I./include
CFLAGS		+=	-W -Wall -Werror -g3

all:  $(CLIB_NAME) $(NAME)

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS) $(CLIB_PATH) -lncurses

$(CLIB_NAME):
		make -C $(CLIB_DIR)

clean:
	make clean -C $(CLIB_DIR)
	$(RM) $(OBJS)

fclean: clean
	make fclean -C $(CLIB_DIR)
	$(RM) $(NAME)

re: fclean all
	make re -C $(CLIB_DIR)