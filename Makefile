NAME = push_swap

CC = gcc

# DON T FORGET FLAGS
CFLAGS = -g

SRCS = push_swap.c utils.c lst.c do_op.c sort_algo.c assign.c error.c

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
