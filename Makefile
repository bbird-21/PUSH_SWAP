NAME = push_swap
NAME_CHECKER = checker
CC = gcc

# DON T FORGET FLAGS

# PATHS

DSRC = src/
DINC = inc/
DSRC_CHECKER = src_checker/
DINC_CHECKER = inc_checker/

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

SRCS_CHECKER = $(addprefix $(DSRC_CHECKER), \
		checker.c\
		error.c\
		lst.c)


OBJS_CHECKER = ${SRCS_CHECKER:.c=.o}
OBJS = ${SRCS:.c=.o}

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

bonus : $(OBJS_CHECKER)
		$(CC) $(CFLAGS) $(OBJS_CHECKER) -o $(NAME_CHECKER)

check : $(NAME) clean
		@ARG=$$(shuf -i 0-500 -n $(SIZE)); \
		echo "ARG : " && echo $$ARG; \
		./push_swap $$ARG
clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re check bonus
