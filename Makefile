NAME = push_swap

CC = gcc

# DON T FORGET FLAGS

# PATHS

DSRC = src/
DINC = inc/

CFLAGS = -g -I $(DINC)

SRCS = $(addprefix $(DSRC),\
		main.c\
		utils.c\
		lst.c\
		do_op.c\
		sort_algo.c\
		assign.c\
		safo3n.c\
		error.c)

OBJS = ${SRCS:.c=.o}

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re bonus
