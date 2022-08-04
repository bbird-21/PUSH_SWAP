NAME = push_swap

CC = gcc

# DON T FORGET FLAGS

# PATHS

DSRC = src/
DINC = inc/

CFLAGS = -g -I $(DINC) -D $(OPTION)

SRCS = $(addprefix $(DSRC),\
		main.c\
		utils.c\
		lst.c\
		do_op.c\
		sort_algo.c\
		assign.c\
		safo3n.c\
		error.c\
		stack_cost.c\
		stack_info.c)

OBJS = ${SRCS:.c=.o}

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


check : $(NAME)
		@ARG=$$(shuf -i 0-50 -n $(SIZE)); \
		./push_swap $$ARG
clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re bonus
