NAME = push_swap
NAME_CHECKER = checker
CC = gcc

# DON T FORGET FLAGS

# PATHS

DSRC = src/
DINC = inc/


CFLAGS = -g3 -Wall -Werror -Wextra -I $(DINC)
CFLAGS_BONUS = -D BONUS -g3 -Wall -Werror -Wextra -I $(DINC)

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

SRCS_CHECKER = $(addprefix $(DSRC), \
		checker.c\
		error.c\
		utils.c\
		get_next_line.c\
		utils_checker.c\
		parse_std_input.c\
		do_op.c\
		do_op2.c\
		lst.c)


OBJS_CHECKER = ${SRCS_CHECKER:.c=.o}
OBJS = ${SRCS:.c=.o}

all : $(NAME)

bonus : $(NAME_CHECKER)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(NAME_CHECKER) : $(OBJS_CHECKER)
		$(CC) $(CFLAGS_BONUS) $(OBJS_CHECKER) -o $(NAME_CHECKER)

check : $(NAME) clean
		@ARG=$$(shuf -i 0-500 -n $(SIZE)); \
		echo "ARG : " && echo $$ARG; \
		./push_swap $$ARG
clean :
		rm -rf $(OBJS) $(OBJS_CHECKER)

fclean : clean
		rm -rf $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re check bonus
