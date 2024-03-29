NAME = push_swap
NAME_CHECKER = checker
CC = cc

DSRC = src/
DINC = inc/

CFLAGS = -Wall -Werror -Wextra -I $(DINC)

# ifeq ($(filter bonus,$(MAKECMDGOALS)),bonus)
# CFLAGS += -D PRINT_INSTRUCTION=0
# endif

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
		get_next_line.c\
		utils_checker.c\
		parse_std_input.c\
		utils.c\
		do_op2.c\
		do_op_checker.c\
		lst.c)

OBJS_CHECKER = ${SRCS_CHECKER:.c=.o}

OBJS = ${SRCS:.c=.o}

# bonus : CFLAGS+=-D PRINT_INSTRUCTION=0

# all : CFLAGS+= -D PRINT_INSTRUCTION=1

# re : CFLAGS+= -D PRINT_INSTRUCTION=1

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : $(NAME)

bonus : $(NAME_CHECKER)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(NAME_CHECKER) : $(OBJS_CHECKER)
		$(CC) $(CFLAGS) $(OBJS_CHECKER) -o $(NAME_CHECKER)

check : $(NAME) clean
		@ARG=$$(shuf -i 0-500 -n $(SIZE)); \
		echo "ARG : " && echo $$ARG; \
		./push_swap $$ARG
clean :
		rm -rf $(OBJS) $(OBJS_CHECKER)

fclean : clean
		rm -rf $(NAME) $(NAME_CHECKER)

re : fclean $(NAME)

re_bonus : fclean bonus

.PHONY : all bonus clean fclean re check