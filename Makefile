NAME = push_swap

CC = gcc

# DON T FORGET FLAGS

# PATHS

DSRC = src/
DINC = inc/

CFLAGS = -g3 -Wall -Werror -Wextra -I $(DINC)

SRCS = $(addprefix $(DSRC),\
		main.c\
		utils.c\
		lst.c\
		do_op.c\
		do_op2.c\
		sort_algo.c\
		assign.c\
		safo3n.c\
		error.c\
		do_move.c\
		stack_info.c)

OBJS = ${SRCS:.c=.o}

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


check : $(NAME) clean
		@ARG=$$(shuf -i 0-500 -n $(SIZE)); \
		echo "ARG : " && echo $$ARG; \
		./push_swap $$ARG
clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re bonus
